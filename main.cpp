#include "aoc2025.h"

#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    // day 1
    int start = 50;
    int count = 0;
    QStringList codes;

    // day2
    QStringList ids;


    // QFile inputFile("/home/david/Projects/AOC2025/input"); linux
    // QFile inputFile("C:\\Users\\f08245e\\Documents\\Projects\\AOC2025\\testinput_day2");
    QFile inputFile("C:\\Users\\f08245e\\Documents\\Projects\\AOC2025\\input_day3");
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
             codes.append(line);
            // ids.append(line.split(','));
        }
        inputFile.close();
    }

   // codes = {"L68", "L30", "R48", "L5", "R60", "L55", "L1", "L99", "R14", "L82"};
    // QStringList ids = {"11-22","95-115","998-1012","1188511880-1188511890","222220-222224",
    //                    "1698522-1698528","446443-446449","38593856-38593862","565653-565659",
    //                    "824824821-824824827","2121212118-2121212124"};



    AOC2025 aoc;
    // for (auto id : ids) {
    //     qDebug() << id;
    // }
    qDebug() << aoc.day3part2(codes);

}





