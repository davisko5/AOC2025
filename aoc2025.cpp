#include "aoc2025.h"

int AOC2025::part1(int start, int count, QStringList &codes)
{
    for (QString &c : codes) {
        if (c.contains('L')) {
            QString numbOnly = c.remove('L');
            int numb = numbOnly.toInt();
            start -= numb;
        }
        if (c.contains('R')) {
            QString numbOnly = c.remove('R');
            int numb = numbOnly.toInt();
            start += numb;
        }

        if (start >= 100) {
            start = start % 100;
        }

        else if (start < 0) {
            start = start % 100;
        }

        if (start == 0) {
            count++;
        }


    }

   return count;

}

int AOC2025::part2(int start, int count, QStringList &codes)
{

    for (QString &c : codes) {
        bool ok = false;
        if (c.contains('L')) {
            QString numbOnly = c.remove('L');
            int numb = numbOnly.toInt();
            if (start == 0)
                ok = true;
            start -= numb;

        }
        if (c.contains('R')) {
            QString numbOnly = c.remove('R');
            int numb = numbOnly.toInt();
            if (start == 0)
                ok = true;
            start += numb;

        }

        if (start > 99) {
            int timesOver99 = start / 100;
            start = start % 100;
            count += timesOver99;
            if (start == 0) {
                continue;
            }

        }
        if (start < 0) {
            int timesOver99 = start / 100;
            if (start % 100 == 0)
                start = 0;
            else
                start = 100 + (start % 100);
            if (ok)
                count -= timesOver99;
            else
                count -= timesOver99 - 1;
            if (start == 0) {
                continue;
            }
        }

        if (start == 0) {
            count++;
        }


    }

    return count;

}

AOC2025::AOC2025() {


}
