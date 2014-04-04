/* -*- Mode: C ; Coding: euc-japan -*- */
/* Time-stamp: <2010-03-06 02:09:48 cyamauch> */

/*
  EGGX / ProCALL  version 0.93
                   eggx_base.h
*/

#ifndef _EGGX_BASE_H
#define _EGGX_BASE_H 1

#include <stddef.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif

/* サポートするウィンドゥ属性 (1<<0は使わない) */
#define SCROLLBAR_INTERFACE (1<<1)
#define DOCK_APPLICATION (1<<3)
#define OVERRIDE_REDIRECT (1<<4)
#define BOTTOM_LEFT_ORIGIN (1<<7)

#define FONTSET 0

#define ENABLE -1
#define DISABLE 0

/* */
#define PENDOWN 2
#define PENUP   3
#define PSET    1

/* 互換用 */
#define DOCKAPP DOCK_APPLICATION
#define OVERRIDE OVERRIDE_REDIRECT
#define BOTTOMLEFTORIGIN BOTTOM_LEFT_ORIGIN

extern void eggx_gsetnonflush( int ) ;
extern int eggx_ggetnonflush( void ) ;
extern void eggx_gflush( void ) ;
extern int eggx_ggetdisplayinfo( int *,int *,int * ) ;
extern int eggx_gopen( int , int ) ;
extern int eggx_winname( int , const char *, ... ) ;
extern void eggx_window( int , double , double , double , double ) ;
extern void eggx_coordinate( int , int , int , 
			     double , double , double , double );
extern void eggx_tclr( void );
extern void eggx_gclose( int ) ;
extern void eggx_gcloseall( void ) ;
extern void eggx_newrgbcolor( int , int , int , int ) ;
extern void eggx_newhsvcolor( int , int , int , int ) ;
extern void eggx_newcolor( int , const char *, ... ) ;
extern void eggx_newpen( int , int ) ;
extern void eggx_newlinewidth( int , int ) ;
extern void eggx_newlinestyle( int , int ) ;
extern void eggx_newgcfunction( int , int ) ;
extern void eggx_gclr( int ) ;
extern void eggx_drawline( int , double , double , double , double ) ;
extern void eggx_line( int , double , double , int ) ;
extern void eggx_moveto( int , double , double ) ;
extern void eggx_lineto( int , double , double ) ;
extern void eggx_pset( int , double , double ) ;
extern int eggx_newfontset( int , const char *, ... ) ;
extern int eggx_gsetfontset( int , const char *, ... ) ;
extern int eggx_drawstr( int ,double, double, int, double, const char *, ... ) ;
extern void eggx_drawsym( int ,double, double, int, int ) ;
extern void eggx_drawsyms( int, const double [], const double [], int, int, int ) ;
extern void eggx_drawsymsf( int, const float [], const float [], int, int, int ) ;
extern void eggx_drawarrow( int, double, double, double, double, double, double, int ) ;
extern void eggx_drawarc( int, double, double, double, double, double, double, int ) ;
extern void eggx_fillarc( int, double, double, double, double, double, double, int ) ;
extern void eggx_drawcirc( int , double , double , double , double ) ;
extern void eggx_circle( int , double , double , double , double ) ;
extern void eggx_fillcirc( int , double , double , double , double ) ;
extern void eggx_drawrect( int, double, double, double, double ) ;
extern void eggx_fillrect( int, double, double, double, double ) ;
extern void eggx_drawpts( int, const double [], const double [], int ) ;
extern void eggx_drawptsf( int, const float [], const float [], int ) ;
extern void eggx_drawlines( int, const double [], const double [], int ) ;
extern void eggx_drawlinesf( int, const float [], const float [], int ) ;
extern void eggx_drawpoly( int, const double [], const double [], int ) ;
extern void eggx_drawpolyf( int, const float [], const float [], int ) ;
extern void eggx_fillpoly( int, const double [], const double [], int, int ) ;
extern void eggx_fillpolyf( int, const float [], const float [], int, int ) ;
extern void eggx_gresize( int, int, int );
extern void eggx_copylayer( int , int , int ) ;
extern void eggx_layer( int, int, int ) ;
extern void eggx_gscroll( int, int, int, int ) ;
extern void eggx_gputarea( int, double, double,
			   int , int , double , double , double , double );
extern int eggx_putimg24( int , double , double , int , int , unsigned char * ) ;
extern int eggx_putimg24m( int , double , double , int , int , unsigned char * ) ;
extern int eggx_gputimage( int , double , double , 
			   unsigned char *, int , int , int ) ;
extern unsigned char *eggx_ggetimage( int , int , 
				      double , double , double , double ,
				      int *, int * ) ;
extern void eggx_gsetnonblock( int ) ;
extern void eggx_gsetscrollbarkeymask( int, unsigned int );
extern int eggx_ggetevent( int *, int *, double *, double * ) ;
extern int eggx_ggeteventf( int *, int *, float *, float * ) ;
extern int eggx_ggetxpress( int *, int *, double *, double * ) ;
extern int eggx_ggetxpressf( int *, int *, float *, float * ) ;
extern int eggx_ggetch( void ) ;
extern unsigned char *eggx_readimage( const char *, const char *,
				      int *, int *, int * );
extern int eggx_writeimage( const unsigned char *, int, int, int, 
			    const char *, int, const char *, ... ) ;
extern int eggx_gsaveimage( int, int, double, double, double, double, const char *, int, const char *, ... ) ;
extern int eggx_saveimg( int, int, double, double, double, double, const char *, int, const char *, ... ) ;
extern void eggx_gsetborder( int , int, const char *, ... ) ;
extern void eggx_gsetbgcolor( int , const char *, ... ) ;

extern void eggx_gsetinitialattributes( int , int ) ;
extern int eggx_ggetinitialattributes( void ) ;
extern void eggx_gsetinitialborder( int , const char *, ... ) ;
extern void eggx_gsetinitialbgcolor( const char *, ... ) ;
extern void eggx_gsetinitialgeometry( const char *, ... ) ;
extern void eggx_gsetinitialparsegeometry( const char *, ... ) ;
extern void eggx_gsetinitialwinname( const char *, const char *, const char *, const char * ) ;
extern void eggx_msleep( unsigned long ) ;

#ifdef __cplusplus
}
#endif

#endif	/* _EGGX_BASE_H */
