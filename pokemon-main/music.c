#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "music.h"
#include <unistd.h> // Para usleep

void sleep_ms(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

void display_frame(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
}

void Pokemon(){
    
    void clear_screen() {
    const char* CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 11);
}

//printar N;

//printar POKEMON
printf("\n\n\n\n\n\n\n\n\n\n");
    printf("                                                 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("                                                 /  PPPPPPPPPPPPPPPPP                    kkkkkkkk                                                                                             /\n");
    printf("                                                 /  P::::::::::::::::P                   k::::::k                                                                                             /\n");
    printf("                                                 /  P::::::PPPPPP:::::P                  k::::::k                                                                                             /\n");
    printf("                                                 /  PP:::::P     P:::::P                 k::::::k                                                                                             /\n");
    printf("                                                 /    P::::P     P:::::P   ooooooooooo    k:::::k    kkkkkkk    eeeeeeeeeeee       mmmmmmm    mmmmmmm      ooooooooooo   nnnn  nnnnnnnn       /\n");
    printf("                                                 /    P::::P     P:::::P oo:::::::::::oo  k:::::k   k:::::k   ee::::::::::::ee   mm:::::::m  m:::::::mm  oo:::::::::::oo n:::nn::::::::nn     /\n");
    printf("                                                 /    P::::PPPPPP:::::P o:::::::::::::::o k:::::k  k:::::k   e::::::eeeee:::::eem::::::::::mm::::::::::mo:::::::::::::::on::::::::::::::nn    /\n");
    printf("                                                 /    P:::::::::::::PP  o:::::ooooo:::::o k:::::k k:::::k   e::::::e     e:::::em::::::::::::::::::::::mo:::::ooooo:::::onn:::::::::::::::n   /\n");
    printf("                                                 /    P::::PPPPPPPPP    o::::o     o::::o k::::::k:::::k    e:::::::eeeee::::::em:::::mmm::::::mmm:::::mo::::o     o::::o  n:::::nnnn:::::n   /\n");
    printf("                                                 /    P::::P            o::::o     o::::o k:::::::::::k     e:::::::::::::::::e m::::m   m::::m   m::::mo::::o     o::::o  n::::n    n::::n   /\n");
    printf("                                                 /    P::::P            o::::o     o::::o k:::::::::::k     e::::::eeeeeeeeeee  m::::m   m::::m   m::::mo::::o     o::::o  n::::n    n::::n   /\n");
    printf("                                                 /    P::::P            o::::o     o::::o k::::::k:::::k    e:::::::e           m::::m   m::::m   m::::mo::::o     o::::o  n::::n    n::::n   /\n");
    printf("                                                 /  PP::::::PP          o:::::ooooo:::::ok::::::k k:::::k   e::::::::e          m::::m   m::::m   m::::mo:::::ooooo:::::o  n::::n    n::::n   /\n");
    printf("                                                 /  P::::::::P          o:::::::::::::::ok::::::k  k:::::k   e::::::::eeeeeeee  m::::m   m::::m   m::::mo:::::::::::::::o  n::::n    n::::n   /\n");
    printf("                                                 /  P::::::::P           oo:::::::::::oo k::::::k   k:::::k   ee:::::::::::::e  m::::m   m::::m   m::::m oo:::::::::::oo   n::::n    n::::n   /\n");
    printf("                                                 /  PPPPPPPPPP             ooooooooooo   kkkkkkkk    kkkkkkk    eeeeeeeeeeeeee  mmmmmm   mmmmmm   mmmmmm   ooooooooooo     nnnnnn    nnnnnn   /\n");  
    printf("                                                 /                                              Press '0' and 'Enter' to start!                                                               /\n");
    printf("                                                 /                                              '1' and 'Enter' to see Creators                                                               /\n");
    printf("                                                 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    

    int start;
    // ENTER = start -- 1 == "créditos"
    return;
    scanf("%d", &start);
    //cutscene    
        if(start == 0){
            clear_screen();
            // Caminho onde os arquivos .txt foram salvos
    const char* txt_folder = "txt/";

    // Número total de frames
    int total_frames = 800;

    // Loop para exibir cada frame
    for (int i = 359; i <= total_frames; ++i) {
        char filename[100];
        snprintf(filename, sizeof(filename), "%sframe%d.txt", txt_folder, i);

        clear_screen();
        display_frame(filename);

        // Ajuste o valor de usleep de acordo com a velocidade desejada da animação
        usleep(50000); // Espera 50000 microssegundos (50 milissegundos)
    }
    clear_screen();
            return;
        }

    else if(start == 1){

            clear_screen();

    
        printf("\n");
        printf("▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓█▓██████████████▓▓██▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▓█▓▓▓▓▓▓███████████████████████\n");
        printf("▓▒▒▒▒▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓████████████████████████▓▓█▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓████▓▓▓▓▓▓▒▒▓\n");
        printf("▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓\n");
        printf("▒▓█▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████▓██████████████████████▓▓▓▓▓▓▒▒▒▓███▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓███████▓▓████████████████████████████▓▓██████████▓▓▓▓▓▓▓██████▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓█\n");
        printf("▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓█████████████████████████████████████▓█████████▓████▓▓▓▓▓██████▓▓▒▒▒▓▒▒▒▒▒▒▒▒▓▓▓▓██\n");
        printf("▓▓▓▓▓▒▒▒▒▓▓▓▓▓█▓▓█████████████████████████████████████▓█████▓█████████████▓██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████\n");
        printf("▒▒▒▒░▒▒▒▒▓▓▓▓█████████████████████████████████████████████████████████████▓▓████████████████████████\n");
        printf("▓▒▒▒▒▒▒▒▒▓▓███▓▓██████████████████████████████████████████████████████████▓▓▓███████████████████████\n");
        printf("▓▓▓▒▒▒▒▒███▓▓▓█▓▓████████████████████████████████████████████████████▓▓▓██▓▓████████████████████████\n");
        printf("▒▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████████████████████████████\n");
        printf("▓▓▓▓▓█▓▓▓███████████████████████████████████████████████████████████████████████████████████████████\n");
        printf("▒▒▓▓▓▓▓▓██████████████████████████████████████████▓▓▓▓██████████████████████████████████████████████\n");
        printf("▒▓▓▓▓▓▓████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓███████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓███████████████████████████████████████▓▓▓▒▒▒▒▓▓▓▓▓██████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓██████████████████████████████████▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓█████████████████████████████████████████\n");
        printf("▓▓▓███▓██████████████████████████████████▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓████████████████████████████████████████\n");
        printf("▓▓▓▓███████████████████████████████████▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓██████████████████████████████████████\n");
        printf("▓▓▓▓██████████████████████████████████▓▓▓▓▓▓▓▓▓▓▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓█████████████████████████████████████\n");
        printf("▓▓▓██████████████████████████████████▓▓▓▓▓▓▓▓▓▓▒▒▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓███████████████████████████████████\n");
        printf("▓▓▓██████████████████████████▓██████▓▓▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▓▓██████████████████████████████████\n");
        printf("▓▓██████████████████████████████████▓▓▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓███████████▓████████████████████\n");
        printf("▓▓██████████████████████████████████▓▓▒▒▒▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓██████████▓▓███████████████████\n");
        printf("▓█████████████████████████████████▓▓▓▓▒▒▓▓▓▒▒▓▓▓▓▓▓▓▓███████▓▓▒▒▒▒▒▒▓▓████████▓▓▓███████████████████\n");
        printf("█████████████████████████████████▓▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓██████▓▓▒▒▒▒▒▒▒▒▒▒▓▓██████▓▓▓▓███████████████████\n");
        printf("█████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██████▓▓▓████████████████████\n");
        printf("████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▒▒▒▒▒▓▓▒░░▒▒▒▒▒▒▒▒▓▓███▓▓▓▓█████████████████████\n");
        printf("█████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▓▒▒░░░░░░░░▒▒▒▒▓▓▓▓█▓████████████████████████\n");
        printf("█▓██████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒▓▓▓▓▓█████████████████████████\n");
        printf("▓▓▓▓████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░▒▒▒▒░░░░░░░░░░░░░░░░▒▒▒▒▒▓▓▓▓▓▓████████████████████████\n");
        printf("▓▓▓▓▓▓▓██████████████████▓▓▓▓▓████████▓▓▓▓▒░░░░░░░░░░▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▓▓▓▓▓▓████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓██████████████▓▓▓▓█▓▓████▓▓▓▓▓▓▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓███████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓████████████▓▓▓█████▓▓▓▓▓▓▓▓▓▒░░░░▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓███████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░░░▒░░░░▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▓▓▓▓▓▓████████████████████▓▓██\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░░░░▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓███▓█████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓███████████████████▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒░▒▒▒▓▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓███▓▓████████████████████\n");
        printf("▓▓▓▓▓████████████████████████▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▓▓▓████▓▓▓███████████████████\n");
        printf("█████████████████████████████▓▓▓▓▒▒▒▒▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓██▓▓▒▓▓▓▓█████▓▓▒▒▓▓▒▒▓██████████████\n");
        printf("███████████████████▓██████████▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓█▓▓▒▒▒▒▒▒▓▓█████▓▒▒▒▒▒▒▒▒▒█████████████\n");
        printf("██████████████████▓████████████▓▓▓▓▒▒▒▒▓▓▒▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓▓████▓▓▒▒▒▒▒▒▒▒▒▓████████████\n");
        printf("█████████████████████████████████▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓███▓▓▓▒▒▒▒▒▒▒▒▒▒████████████\n");
        printf("███████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▒▒▓▓███▓▓▓▒▒▒▒▒▒▒▒▒▒▓███████████\n");
        printf("████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▓▓▓██▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓███████████\n");
        printf("██████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓██▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓███████████\n");
        printf("████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓▓█▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒████████████\n");
        printf("███████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒████████████\n");
        printf("███████████████▓▒▒███▓▓███████████████████████▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒████████████\n");
        printf("██████████████▓▓▒▒██▓▓▓▓▒███████████████████████▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒████████████\n");
        printf("▓▓▓▓██████████▓▓▒▒▓█▓▓▓▓▒▓▓▓█████████████████████▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒████████████\n");
        printf("▓▓▓▓▓▓▓████████▒▒▒▒▓█▓▓▒▒▓███████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓████████████\n");
        printf("▓▓▓▓▓▓▓▓███████▒▒▒▒▓█▓▓▒██████████████████████████▓▓███████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓████████████\n");
        printf("██▓▓▓▓▓▓▓▓██████▒▒▒▓██▓█████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓█████████████\n");
        printf("██▓▓▓▓▓▓▓▓██████▒▒▒▓██████████████████████████████████████▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓█████████████\n");
        printf("▓▓▓▓▓▓▓▓▒▒▒██████░▒▒██████████████████████████████████████▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓█████████████\n");
        printf("▓▓▓▓▓▓▓▒▒░░▓█████▒▒▒▓▓▒▓████████████████████████████████████▓███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓█████████████\n");
        printf("\n");
        printf("\n                               PHILIPE AMANCIO REIS CAETANO                                       \n");







        sleep_ms(3000);

        clear_screen();






        printf("\n");
        printf("             ░░          ░░░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░▒░▒▓▓███▓▓▓█████▓▓▒▒▒▓▓███████████████████\n");
        printf("                            ░░░░░░░ ░░░░░░░░░░░░ ░░░░░░░░░░░▒░░▒▓▓▓▒█████▒▓▓▒▒▒▓████████████████████\n");
        printf("                            ░░               ░░░░░░░░  ░░░░ ░░░░░▒░▒▒▒▒▒▓▓█▓▒▒▒▓▓███████████████████\n");
        printf("                                     ░░░ ░ ░░░ ░░░░  ░░░░░░░░░░░░░░░░░░▒▒▓▓▓▒▒▒▓▓███████████████████\n");
        printf("                        ░░░                    ░░░░ ░░░░░░░░░░░░░░░░░░░░░▓▓▒▒▒▒▒▓██████████████████▓\n");
        printf("                       ░░░░                          ░░░░░░░░░░ ░░░░░░░░░░░▒▒▒▒▒▓██████████████████▓\n");
        printf("                      ░   ░░              ░░     ░  ░ ░ ░░░░░░░░  ░░░░░░░░░ ░░░░▒▓████████████████▓▓\n");
        printf("                                               ░░  ░░░░░░░ ░░░   ░░░░░░░░░░░░░░░░▒████████████████▓▓\n");
        printf("                                              ░░░░░  ░░░░░░░       ░░░░░ ░    ░░░░░███████████████▓▒\n");
        printf("                                                  ░░░ ░░░          ░░░░░░     ░░░░░▒█████████████▓▒▒\n");
        printf("      ░                                                            ░ ░░░░     ░░░░░░▒▒▓████████▓▓▒░░\n");
        printf("                                                 ░░░░░░  ░░          ░░░      ░░░░ ░░▒▒▒▒▓▓▓▓▒▒▒░░░░\n");
        printf("                                          ░  ░░░░░░░░░░░░░░        ░░░░░░░     ░░░░░░░▒░▒░░░░░░░░░░░\n");
        printf("              ░░                              ░░░░░░ ░░░░       ░░░░░░░░░░░    ░  ░░░░░░░░░░░░ ░░░░░\n");
        printf(" ░           ░░░                                ░░    ░░░░░░░  ░░░░░▒▓▒▒▒░░░    ░░░░░░░░░░░ ░    ░░░\n");
        printf("░░░░░░       ░░░░                                ░  ░   ░░░░░░░░░░▒▓███▓▒▒░░     ░░░░░░░░░░░   ░░░░░\n");
        printf("░░░░░       ░░░░░                                ░ ░░░░░░░ ░░░░▓████████▓▓▒░      ░░░░░░░░░░  ░░░░░░\n");
        printf("░░░░░░░░░░░░░░░░                                 ░░░░░░▒▒▒▒░▒▓▓█████████▓▓▓▒░    ░░ ░░░░░░░░░░░░░░░░\n");
        printf("▒▒▒▒▒▒▒░░░▒▒▒▒▒▒                                ░░░░▒▒▒▒▒▓██████████████▓█▓▓▒   ░░░░░░░░░░▒▒▒▒▒▒░░░░\n");
        printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                               ░░░░░░░▒▒▓▓▓████████████▓█████▒ ░░▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
        printf("▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                         ░      ░░░███▓▓▓█▒▓▓▓███████▒▓▓▒░▒▒▒░▒▓▓▓▓▓▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░                    ░░░░░░░  ░░░█▓█▒▒░░▒▓▒░░ ▒▓███▒▒▒░░█   ░ ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒      ░░            ░░░     ░░▒▒░  ░ ░░        ░░░░░░ ░     ░░  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒    ▓▒▒░░░         ░░░▒▒▒▒▓▒▒░░          ░░░ ░░▓██▒░▒       ░    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("████████████████▓   ▓▓▓▓▒░░        ░░▒▓▓▓▓▓▓▓▓░░ ░░░ ░░░░░░░░░░ ███▒     ░░ ░   ░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("█████████████████   █▓████▓▓░░    ░░▒▓▓█████▓▓▓▓░░░░░░░░░░░░░░░▓████░░░░░░░░░░░▒▒░██▓▓▓▓▓▓███▓▓▓▓▓▓▓\n");
        printf("█████████████████░  ▓▓████▓░▒▓░ ░░░▒▓▓██████████░░░░░░░░░░░░░░▒█████▓░░░░░░░░▒░░░░██████████████████\n");
        printf("█████████████████▒   ▓▓███▓▒▓▓█▓▓▒▓▓█████████████░░░░░░░░░░░░▒███████░░░░░░░░░░░░███████████████████\n");
        printf("█████████████████▓    ███▓▓██▓████████████████████▓░░░░░░░░▒▓█████████░░░░░░░░▒░████████████████████\n");
        printf("█▓▓▓███████▓▓▓████░    ████▓▓█████████████████████████▓▓▓▓▓▓███████████▒░░░░░▒██████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓█████▓     ██████████████████████████████▓███▓▓███████████▓▓███████████████████████████\n");
        printf("██▓▓▓▓▓▓▓▓▓▓██████▒      ▒██████████████████████████▓██████████▓▓▓█████▓▓▓██████████████████████████\n");
        printf("▓▓▓▓▒▓▓▓▓▓▓▓██████░      ▒▓▓▓█████████████████████▓█████████████▓▓██████▒▓▓█████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓███████░     ░▓████▓▓▓▓▓██████████████▓▓▒▓▓█████████████████▓▓▓██████████████████████████\n");
        printf("████████████████████▓░░░▒▓██████▓▓▓██████████████▓▓▒▓▒█▓████▓█▓▓▓▓▓▓▓▓▓▓▓███████████████████████████\n");
        printf("█████████████████████░░▒▓▓████████▓█████████████████▓▓█████████████░▓█▓▓████████████████████████████\n");
        printf("████████████████████▓░▒▒▓▓▓███████▓▓████████████████████████████████████████████████████████████████\n");
        printf("████████████████████▒▒▒▒▓▓▓████████▓▓███████████████████████████████████████████████████████████████\n");
        printf("███████████████████▓▒▒▒▒▓▓▓████████▓▓███████████████████████████████████████████████████████████████\n");
        printf("███████████████████▓▓▒▒▓▓▓▓▓████████▓▓▓█████████████████████████████████████████████████████████████\n");
        printf("██████████████████▓▓▓▒▒▓▓▓▓▓▓████████▓▓▓▓▓█████████████████████████████████████████████████████▓▓███\n");
        printf("████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████▓▓▓▓▓▓▓▓▓████████████████████████████████████████████████▓▓███\n");
        printf("██████████████▓▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓█████████▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████████████████████████\n");
        printf("█████████▓▓▓▓▓▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓█████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████████████████████\n");
        printf("██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████████\n");
        printf("████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████████████████████████████\n");
        printf("█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████████▓▓▓▓▓▓▓▓▓▓▓█████████▓▓▓▓▓▓▓▓▓▓█████████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓███████████████▓▓▓▓▓▓▓▓████████▓██▓▓████████████████████████████████████████████████▓▓█\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓███████████████████▓▓▓▓▓▓████████▓▓▓▓▓▓███████████████████████████████████████████████▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓████████████████████████▓▓▓██████████▓▓▓▓█████████████████████████████████████████████████\n");
        printf("█▓▓▓▓▓▓▓▓██████████████████████████████████████▓▓███████████████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓██████████████████████████████▓▓█████████████████████████████████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████████████████████████▓██▓\n");
        printf("▓▓▓▓▓▓▓▓█████████████████████████████████████▓██████████████████████████████████████████████████████\n");
        printf("\n");
        printf("\n                             PEDRO HENRIQUE GALDINO DE ANDRADE WOLLMANN                           \n");


       sleep_ms(3000);

        clear_screen();

                printf("\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░░░░░░░▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░▒░░▒▒▒░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░▒░░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░▒▒░░░░░░░░▒░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░▒▒░░▒░░░░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓▒▒░░░░░▒░▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░▒▓█████▓▓▓▓░░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░▒▓▓▓█████▓▓▒▒░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░▓▓▓████▓▓▓▓▓▓▒░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░▒▒░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓████▓▓▓▒░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░▒░░░░░░░░░░░░▒▒▒▓▒▓▓▓▒░░▒▒▒▒▒▒▓▒░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░▒▒▒▒▒▒░░▒▒▒▒▓▓▓▓▓▓▓▒░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒░░░░░░░░░░▒▒▒▒▒▓░▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▓░░░░▒▒░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓░░░░░░░░░▒▒▒▒▒░░▒▒░▓█▓▒▒░░▒▒▒▒▓▓▓▓▓▓▒░▒▒▒▒▓█████████████████████████████████\n");
        printf("█████████████████████████▒▒▒░░░░▒▒▒▒▒▒░░░░▒▓██▒█▓▒▒▒▓▓▓▓▓▓▓▓▒▒▒▓▓▓██████████████████████████████████\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░▒▒▒▒▒▒▒▒▒░▒▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓░░░▒▒▒▒▒▒▒▒▒▒▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒\n");
        printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒\n");
        printf("▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒████▓▓▓▓▓▓▓▓▓▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▓▓▓▒▒▒▒▒▒▒▒\n");
        printf("▒▒▒▒▒▓▒▒▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▒▒▒\n");
        printf("▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒░▒▓▓▓▒▒▓▓▓▒▒▓▓▓▓▓▓▓░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░▒░░▒▒░▒▒▒▒▓▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒░▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▓▓▓▓▓░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓░▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▓▓██▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓░▓▓▓██▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▓▓▓▓▓▒▒▒▒▒▒▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▓▓▓▓▓▒▒▒▒▒▒░▒▒▒▒▒░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▓▓▒▓▓▒░▒▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████░░░░░░░░░░░░▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒░▓▓▓▓▓▓▒▒▒▒▒▒▒▒░▓░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░░░░░░░░░░▒▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒░▓▓▓▓▓▓▒▒▒▒▒▒▒▓▒░▓░░░▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓\n");
        printf("▓▓███▓▓▓▓▓▓▓▓▓▓██▓▓▓██▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒▒▒░░▒▒▒▒▒▒▒░▒▒░▓▓▓▓▓▓▓▒▒▒░▒▒▒▒▒▒░▒░▒░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████\n");
        printf("▓█▓▓▓▓▓▓▓██████████▓▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▒▒▒▒▒▒░▒▓▓▓▓░░▒▒▒▒▒▒▒▒▒▒▒░▒▒▒▒▒▒▒░▒░▒░▓▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓▒▒▒░▒▒▒▒▒▒▒▒▒▒▒░▒░░░▒▒▒░▒▒░▒▒░░▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓\n");
        printf("██▓▓▓▓█████▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒░░░░░░▒▒▒▒░▒▒░▒▓░░▒▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▓▓\n");
        printf("██████████▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░▒░░▒▒▓▓▓▓▓▒▓▒▓▓▓▒▒▒▒▒▒▒▒░░▒░░░░▒▒▒░▒▒▒░▒░▒▒▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▒▓▓\n");
        printf("███████████████▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░▒░▒▒░░▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒░░░░▒░░░░░▒▒▒░▒▒▒░▒▒▒░▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓\n");
        printf("▓▓▓▓▓▓▓▓███▓▓▓█▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒░▒▒▒░░░▒▒▒▒▓▓▓▓▓▒▒▒▒▒░▒░░░▒░░░░░░▒▒░▒▒▒░▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▒▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒░▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒░░▒░░░▒░░░░░░▒▒░░▒▒▒░▒▒░▒░▓▓▓▒▒▒▒▒▒▒▒▒▓▓▒▒█\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒░░░░░░▒░░░░░░░▒▒░▒▒▒░▒▒▒▓▒░▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░▒▒▒░▒▒▒▒▒░░░▒░░░░░░░░░░░░░░▒░░░░░░░░▒░░▒▒▒░▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▒▒▒▒▒▒█\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒░░░░░░░░░░░░▒░░░░░░░░░░░░▒░░░░▒▒░▒░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░░▒▒░▒▒▒▒░▒▒▒▒▒▒▒▒▒▒▒▒▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▒▒▒▒░░▒░▒▒▒▒▒▒░░░░▒▒░░░░░░░░▒░░░░░░░░░░░░░▒░░░░▒▒░▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▓\n");
        printf("\n");

        printf("\n                             ARTHUR MARTINS SANTOS DA SILVA                           \n");
        
        
        sleep_ms(3000);

        clear_screen();
        
        
        Pokemon();            

    }
}

void music() {
    // Caminho para o arquivo de som MP3
    const char *soundFile = "musica/PokemonOpening.mp3";

    // Comando para tocar o som em loop usando mpg123
    char command[512];
    snprintf(command, sizeof(command), "mpg123 -q --loop -1 \"%s\" &", soundFile);

    // Executa o comando
    if (system(command) == -1) {
        printf("Erro ao executar o comando para tocar o som.\n");
        return; // Retorna se houver erro ao executar o comando
    }

    Pokemon();

     // Espera o usuário pressionar Enter

    // Para a música matando o processo mpg123
    system("pkill mpg123");

    return; // Finaliza a função
}

void musicHP() {
   
    // Caminho para o arquivo de som MP3
    const char *soundFile = "musica/Fortnite.mp3";

    // Comando para tocar o som uma vez usando mpg123
    char command[512];
    snprintf(command, sizeof(command), "mpg123 -q \"%s\"", soundFile);

    // Executa o comando
    system(command);

    
        
       // sleep_ms(5000);
    

    return; // Finaliza a função
}

void Attacksound(int *chooseAttack, int *i, int poke){
    
     const char *soundFile = NULL;
     //qual batalha
     if(poke == 2){
    
        if(*i == 0){
            soundFile = "musica/ThunderP.mp3";       
        }
        else if(*i == 1){
            soundFile = "musica/FireSpin.mp3";

        }        
        else if(*i == 2){
            soundFile = "musica/Protect.mp3"; 
        }        
        else if(*i == 3){
            soundFile = "musica/Swift.mp3"; 
        }

    if(*i == -1){        
        if(*chooseAttack == 0) {
            soundFile = "musica/vine.mp3";
            //*chooseAttack = 0;
        }
        else if(*chooseAttack == 1){
            soundFile = "musica/TakeDown.mp3";
           // *chooseAttack = 0;
        }
        else if(*chooseAttack == 2){
            soundFile = "musica/Razor.mp3";
        }
        else if(*chooseAttack == 3){
            soundFile = "musica/Growl.mp3";
        }
        }
    }
    // Comando para tocar o som uma vez usando mpg123
    char command[512];
    snprintf(command, sizeof(command), "mpg123 -q \"%s\"", soundFile);

    // Executa o comando
     system(command);
}




