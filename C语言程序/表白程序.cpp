#include <stdio.h>
#include <unistd.h>

void displayMessage(const char *message, int delay) {
    while (*message != '\0') {
        putchar(*message);
        fflush(stdout);
        usleep(50000);  // sleep for 50 milliseconds
        message++;
    }
    sleep(delay);
}

int main() {
    printf("��ã����������һЩ����...\n");
    sleep(1);

    displayMessage("��һֱ��ϲ���㣬", 1);
    displayMessage("�����ǵ�һ�μ��濪ʼ��", 1);
    displayMessage("�ҷ�������һ���ر��������", 1);
    displayMessage("��ϲ��������һ���ʱ�⣬", 1);
    displayMessage("ÿһ�̶����Ҹе���졣", 1);
    displayMessage("��������㣬��ϲ�������㡣\n", 1);

    printf("\n�����������...\n");
    sleep(1);

    char response[10];
    printf("��Ը���Ϊ�ҵ�Ů������ (���� 'yes' �� 'no'): ");
    scanf("%s", response);

    if (strcmp(response, "yes") == 0) {
        printf("\n̫���ˣ�����ĺܸ��ˣ�\n");
    } else {
        printf("\nŶ����û��ϵ��лл������˵��\n");
    }

    return 0;
}

