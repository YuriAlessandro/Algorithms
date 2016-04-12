/**
 * DAL class implementation.
 *
 */

#include "dal.h"

// ---> DAL:

template <typename Key, typename Data, typename MyKeyComparator>
int DAL<Key, Data, MyKeyComparator>::compare(Key _x, Key _y) const {
    MyKeyComparator compare;
    return compare(_x, _y);
}

template < typename Key, typename Data, typename MyKeyComparator >
int DAL<Key, Data, MyKeyComparator>::_search( const Key & _x ) const {
	int i;
	for (i = 0; i < mi_Length and compare(mpt_Data[i].id, _x) != 0; i++);
	return i;
}

template < typename Key, typename Data, typename MyKeyComparator >
bool DAL<Key, Data, MyKeyComparator>::remove( const Key & _x, Data & _s ){

	int pos = this->_search( _x );
	if( pos != mi_Length ){
		_s = mpt_Data[ pos ].info;
		mpt_Data[ pos ].id = mpt_Data[ mi_Length - 1].id;
		mpt_Data[ pos ].info = mpt_Data[ mi_Length - 1].info;
		mi_Length--;
		return true;
	}else return false;

}

template < typename Key, typename Data, typename MyKeyComparator >
bool DAL<Key, Data, MyKeyComparator>::search( const Key & _x, Data & _s ) const{

	std::cout << "\t--> Buscando pela informação da chave " << _x << std::endl;
	int pos = this->_search( _x );
	if ( pos != mi_Length ){
		_s = mpt_Data[pos].info;
		return true;
	}else return false;

}

template < typename Key, typename Data, typename MyKeyComparator >
bool DAL<Key, Data, MyKeyComparator>::insert( const Key & _newID, const Data & _newINFO ){

	int pos = this->_search( _newID );

	if (pos != mi_Length) return false;		//JA ESTÁ NA LISTA
	else{
		if(mi_Length < mi_Capacity){
			mpt_Data[ mi_Length ].id = _newID;
			mpt_Data[ mi_Length ].info = _newINFO;
			mi_Length++;
			return true;
		}else throw std::length_error( "[insert()]: Não é possível inserir mais elementos" );
	}
	return false;
}

template < typename Key, typename Data, typename MyKeyComparator >
Key DAL<Key, Data, MyKeyComparator>::min( void ) const{
	Key _min = mpt_Data[0].id;
	for (int i = 0; i < mi_Length; i++){
		_min = ( compare(mpt_Data[i].id, _min) == -1 ) ? mpt_Data[i].id : _min;
	}
	return _min;
}

template < typename Key, typename Data, typename MyKeyComparator >
Key DAL<Key, Data, MyKeyComparator>::max( void ) const{
	Key _max = mpt_Data[0].id;
	for (int i = 0; i < mi_Length; i++){
		_max = ( compare( mpt_Data[i].id, _max) == 1 ) ? mpt_Data[i].id : _max;
	}
	return _max;
}

// Construtor inicializa TAD.
template < typename Key, typename Data, typename MyKeyComparator >
DAL<Key, Data, MyKeyComparator>::DAL ( int _iMaxSz ) :
    mi_Length( 0 ),         // Tamanho logico.
    mi_Capacity( _iMaxSz ), // Guardar capacidade atual.
    mpt_Data( nullptr )
{
    if ( _iMaxSz < 0 )          // Nao aceitamos lista com tamanho negativo.
        throw std::invalid_argument( "[DAL()]: Tamanho de lista invalido!" );
    mpt_Data = new NodeAL[ _iMaxSz ]; // Tamanho maximo.
}



// ---> DSAL:

template < typename Key, typename Data, typename MyKeyComparator >
int DSAL<Key, Data, MyKeyComparator>::_search( const Key & _x ) const {
    
    int l  = 0, r = DAL<Key, Data, MyKeyComparator>::mi_Length - 1;
    int m;
    while (l <= r) {
        m = (l+r)/2;
        if (DAL<Key, Data, MyKeyComparator>::compare(DAL<Key, Data, MyKeyComparator>::mpt_Data[m].id, _x) == 0) return m;
        else if (DAL<Key, Data, MyKeyComparator>::compare(DAL<Key, Data, MyKeyComparator>::mpt_Data[m].id, _x) == -1) l = m+1;
        else r = m-1;
    }
    return DAL<Key, Data, MyKeyComparator>::mi_Length;
}

template < typename Key, typename Data, typename MyKeyComparator >
bool DSAL<Key, Data, MyKeyComparator>::remove( const Key & _x, Data & _s ){

	int pos = this->_search( _x );

	if ( pos != DAL<Key, Data, MyKeyComparator>::mi_Length ){
		_s = DAL<Key, Data, MyKeyComparator>::mpt_Data[pos].info;
		for (auto i = pos; i < DAL<Key, Data, MyKeyComparator>::mi_Length-1; i++)
			DAL<Key, Data, MyKeyComparator>::mpt_Data[i] = DAL<Key, Data, MyKeyComparator>::mpt_Data[i+1];

		DAL<Key, Data, MyKeyComparator>::mi_Length--;
		return true;
	}else return false;

}

template < typename Key, typename Data, typename MyKeyComparator >
bool DSAL<Key, Data, MyKeyComparator>::insert( const Key & _newID, const Data & _newINFO ){
	int pos = this->_search( _newID ), i = DAL<Key, Data, MyKeyComparator>::mi_Length;

	if (pos == DAL<Key, Data, MyKeyComparator>::mi_Length){		//Ainda não foi inserido
		if( DAL<Key, Data, MyKeyComparator>::mi_Length < DAL<Key, Data, MyKeyComparator>::mi_Capacity){
			while (i > 0 and DAL<Key, Data, MyKeyComparator>::mpt_Data[i-1].id > _newID){
            	DAL<Key, Data, MyKeyComparator>::mpt_Data[i] = DAL<Key, Data, MyKeyComparator>::mpt_Data[i-1], i--;
			}
        	DAL<Key, Data, MyKeyComparator>::mpt_Data[i].id = _newID;
        	DAL<Key, Data, MyKeyComparator>::mpt_Data[i].info = _newINFO; 
        	DAL<Key, Data, MyKeyComparator>::mi_Length++;
			return true;
		}else throw std::length_error( "[insert()]: Não é possível inserir mais elementos" );

	}else return false;							//Já foi inserido
}

template < typename Key, typename Data, typename MyKeyComparator >
Key DSAL<Key, Data, MyKeyComparator>::min( void ) const{
	if( DAL<Key, Data, MyKeyComparator>::mi_Length != 0){
		Key _min = DAL<Key, Data, MyKeyComparator>::mpt_Data[0].id;
		return _min;
	}
	return 0;
}

template < typename Key, typename Data, typename MyKeyComparator >
Key DSAL<Key, Data, MyKeyComparator>::max( void ) const{
	if( DAL<Key, Data, MyKeyComparator>::mi_Length != 0){
		Key _max = DAL<Key, Data, MyKeyComparator>::mpt_Data[ DAL<Key, Data, MyKeyComparator>::mi_Length - 1 ].id;
		return _max;
	}
	return 0;
}

template < typename Key, typename Data, typename MyKeyComparator >
bool DSAL<Key, Data, MyKeyComparator>::sucessor( const Key & _x, Key & _y ){
	int pos = _search(_x);
	if( pos == DAL<Key, Data, MyKeyComparator>::mi_Length ) return false;
	_y = DAL<Key, Data, MyKeyComparator>::mpt_Data[pos+1].id;
	return true;
}


template < typename Key, typename Data, typename MyKeyComparator >
bool DSAL<Key, Data, MyKeyComparator>::predecessor( const Key & _x, Key & _y ){
	int pos = _search(_x);
	if( pos == DAL<Key, Data, MyKeyComparator>::mi_Length ) return false;
	_y = DAL<Key, Data, MyKeyComparator>::mpt_Data[pos-1].id;
	return true;
}
