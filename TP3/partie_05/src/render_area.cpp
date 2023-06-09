
#include "render_area.hpp"

#include <iostream>

#include <QPixmap>
#include <QPainter>

render_area::render_area(QWidget *parent)
    :QWidget(parent),pixmap(new QPixmap),draw_circle(true)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    pixmap->load("./image.jpg");
    pix = *pixmap;
    pix = pix.scaled(1100,400);
    pixmap = &pix;
    //auto smaller_pixmap = pixmap->scaled(32, 32, Qt.KeepAspectRatio, Qt.FastTransformation);
}

render_area::~render_area()
{
	if(pixmap!=nullptr)
	{
		delete pixmap;
		pixmap=nullptr;
	}
}


void render_area::paintEvent(QPaintEvent*)
{
    //A painter class able to draw in 2D
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    //The drawing pen with its properties
    QPen pen;
    pen.setWidth(4.0); 
    pen.setColor(Qt::blue); 
    painter.setPen(pen);

    //The brush class is usefull to fill the interior of the shapes
    QBrush brush = painter.brush();
    brush.setColor(Qt::gray); //color of the interior of the shape
    brush.setStyle(Qt::SolidPattern); //fill the interior
    painter.setBrush(brush);

    //if draw_circle is true, then we draw an ellipsoid
    if(draw_circle)
        //painter.drawEllipse(200,100,200,100);
        painter.drawPixmap(0,0,*pixmap);

}


void render_area::change_draw_circle_state()
{
    draw_circle=!draw_circle;
    repaint();
}
