#include "aoc2025.h"

#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{

    QStringList codes;


    // linux
    QFile inputFile("/home/david/Projects/AOC2025/input_day3");
    // QFile inputFile("C:\\Users\\f08245e\\Documents\\Projects\\AOC2025\\input_day3");
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


    AOC2025 aoc;
    qDebug() << aoc.day3part2(codes);

}





