
/* ************************************************************************ *
 *    ex12.c, v.0.2                                                         *
 *    Programa feito para simular uma rede de petri dado um arquivo de      *
 *    texto como entrada                                                    *
 *                                                                          *
 *    Copyright (C) 2015                                                    *
 *    Igor Rêgo Barros de Santana                                           *
 *    Lucas Canejo Jurema                                                   *
 *    Thayna Maria Morim de Barros Barreto                                  *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *                                                                          *
 *    Igor Rêgo Barros de Santana   <igor.rbsantana@gmail.com>              *
 *    Phone: 55 (819) 9525-5274                                             *
 *                                                                          *
 *    Lucas Canejo Jurema <lucasbrgol2010@hotmail.com>                      *
 *    Phone: 55 (819) 9547-1048                                             *
 *                                                                          *
 *    Thayna Maria Morim de Barros Barreto <tmorimbarreto@gmail.com>        *
 *    Phone: 55 (819) 9746-8034                                             *
 *                                                                          *
 *                                                                          *       
 ************************************************************************** *

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef DEBUG
#define DEBUG 0 /* Ativa modo de debug */
#endif


/*Fluxograma>> início: Ler aquivo Txt
 *                     
 *                     definir valores iniciais
 *                     
 *                     laço máximo de iterações (até pelo menos uma transição ativar <= Max de iterações)
 *                    
 *                          Pthread_create
 *                              transição
 *                          Pthread_join
 *                     
 *                     fim do laço
 *
 *                      desenha rede de Petri
 *
 *                      Fim da simulação*/
int main (void)
{
    ;
}
