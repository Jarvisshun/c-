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
    printf("你好，我想告诉你一些事情...\n");
    sleep(1);

    displayMessage("我一直很喜欢你，", 1);
    displayMessage("从我们第一次见面开始，", 1);
    displayMessage("我发现你有一种特别的魅力。", 1);
    displayMessage("我喜欢和你在一起的时光，", 1);
    displayMessage("每一刻都让我感到愉快。", 1);
    displayMessage("我想告诉你，我喜欢上了你。\n", 1);

    printf("\n最后，我想问你...\n");
    sleep(1);

    char response[10];
    printf("你愿意成为我的女朋友吗？ (输入 'yes' 或 'no'): ");
    scanf("%s", response);

    if (strcmp(response, "yes") == 0) {
        printf("\n太好了，我真的很高兴！\n");
    } else {
        printf("\n哦，这没关系。谢谢你听我说。\n");
    }

    return 0;
}

