/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main()
{
    float L,G=3.88,A=3.18,g,a;
    char C;

    printf("DIGITE (G) PARA GASOLINA OU (A) PARA ALCOOL: ");
    printf("\n");

    do{
        printf("\nTIPO DE COMBUSTIVEL: ");
        C=getche();
        C=tolower(C); /*CONVERTE LETRA MAIUSCULA PARA MINUSCULA*/

        if((C!='g')&&(C!='a'))
        {
            printf("\nPOR FAVOR DIGITE APENAS (G) PARA GASOLINA E (A) PARA ALCOOL\n");
        }
    }while((C!='g')&&(C!='a'));

    if(C=='g')
    {
        do{
            printf("\nDIGITE A QUANTIDADE DE LITROS: ");
            scanf("%f",&L);
            if(L<=0)
            {
                printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
            }
        }while(L<=0);

            if(L<=20)
            {
                g = L;          /*SALVA O VALOR DE LITROS*/
                G *= 1-0.04;    /*DESCONTA 4% DE CADA LITRO*/
                L = G*L;        /*MULTIPLICA O VALOR DA GASOLINA PELOS LITROS DESEJADOS*/
                    if(g==1)
                    {
                        printf("%.2f LITRO DE GASOLINA COM 4%% DE DESCONTO = %.2f",g,L);
                    }
                        else
                        {
                            printf("%.2f LITROS DE GASOLINA COM 4%% DE DESCONTO = %.2f",g,L);
                        }
            }
                else if(L>20)
                {
                    g = L;
                    G *= 1-0.06;
                    L = G*L;

                    printf("%.2f LITROS DE GASOLINA COM 6%% DE DESCONTO = %.2f",g,L);
                }
    }
        else if (C=='a')
        {
            do{
            printf("\nDIGITE A QUANTIDADE DE LITROS: ");
            scanf("%f",&L);
            if(L<=0)
            {
                printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
            }
        }while(L<=0);

            if(L<=20)
            {
                a = L;
                A *= 1-0.03;
                L = A*L;
                    if(a==1)
                    {
                        printf("%.2f LITRO DE ALCOOL COM 4%% DE DESCONTO = %.2f",a,L);
                    }
                        else
                        {
                            printf("%.2f LITROS DE ALCOOL COM 4%% DE DESCONTO = %.2f",a,L);
                        }
            }
                else if(L>20)
                {
                    a = L;
                    A *= 1-0.05;
                    L = A*L;

                    printf("%.2f LITROS DE ALCOOL COM 5%% DE DESCONTO = %.2f",a,L);
                }
        }
}
