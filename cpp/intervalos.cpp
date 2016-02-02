#include <iostream>

using namespace std;

int main(){

	int x;
	auto total_numbers(0);
	int t01 = 0, t02 = 0, t03 = 0, t04 = 0, none = 0;
	float perc1, perc2, perc3, perc4;

	cout << " Entre com valores inteiros ( Ctrl + d p / encerrar ): " << endl ;
	
	while ( cin >> x ) {
		cout << ">>> Recebido o valor " << x << "\n";
    	if (x >= 0 && x < 25) t01++;
    	else if (x >= 25 && x < 50) t02++;
    	else if (x >= 50 && x < 75) t03++;
    	else if (x >= 75 && x < 100) t04++;
    	else none++;
    	total_numbers++;
    }

    perc1 = static_cast < float > (t01)/total_numbers*100;
    perc2 = static_cast < float > (t02)/total_numbers*100;
    perc3 = static_cast < float > (t03)/total_numbers*100;
    perc4 = static_cast < float > (t04)/total_numbers*100;

    cout << "\n\nDe um total de " << total_numbers << " números, resultou:\n";
    cout << "\n>> Um total de " << perc1 << "\% numeros no primeiro intervalo";
    cout << "\n>> Um total de " << perc2 << "\% numeros no segundo intervalo";
    cout << "\n>> Um total de " << perc3 << "\% numeros no terceiro intervalo";
    cout << "\n>> Um total de " << perc4 << "\% numeros no quarto intervalo\n";

    none = total_numbers - (t01 + t02 + t03 + t04);

    cout << none << " números não estavam em qualquer intervalo\n";

    return EXIT_SUCCESS;
}
