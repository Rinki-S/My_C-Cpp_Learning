#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int seconds;
};

int main(void)
{
    struct time start, end;
    int past;
    long int startsec, endsec;
    scanf("%d:%d:%d", &start.hour, &start.minute, &start.seconds);
    getchar();
    scanf("%d", &past);
    startsec = start.hour * 3600 + start.minute * 60 + start.seconds;
    endsec = startsec + past;
    end.hour = endsec / 3600;
    if (end.hour > 23)
    {
        end.hour -= 24;
    }
    endsec %= 3600;
    end.minute = endsec / 60;
    endsec %= 60;
    end.seconds = endsec;
    printf("%02d:%02d:%02d", end.hour, end.minute, end.seconds);
    return 0;
}