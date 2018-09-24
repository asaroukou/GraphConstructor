#ifndef VERTEX_H
#define VERTEX_H


class Vertex
{
    public:
        int x;
        int y;
        int id;

        Vertex(int x=0, int y=0, int id=0);
        void show();
        virtual ~Vertex();

    protected:

    private:
};

#endif // VERTEX_H
