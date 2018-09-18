#ifndef VERTEX_H
#define VERTEX_H


class Vertex
{
    public:
        int x;
        int y;
        int id;

        Vertex(int x, int y, int id);
        void show();
        virtual ~Vertex();

    protected:

    private:
};

#endif // VERTEX_H
