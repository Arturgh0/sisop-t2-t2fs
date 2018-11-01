#ifndef __t2fs_internal__
#define __t2fs_internal__

#include "t2fs.h"
#include <stdlib.h>

///// deifini�oes

typedef struct t2fs_record DESCRIPTOR;

typedef struct {
    DESCRIPTOR   *buffer;   /* Ponteiro para buffer contendo o descritor do arquivo */
    int          current_pointer;   /* Posi��o corrente do arquivo */
} HANDLE;


/*
typedef struct {
    HANDLE *ant;
    HANDLE handle;
    HANDLE *pos;
} NODE_HANDLE;

typedef *NODE_HANDLE P_NODE_HANDLE;
*/

// ESTRUTURAS


/////// fun��es internas da biblioteca ///////////
// inicializa t2fs, retorna 0 se sucedidio, outro valor se erro
int t2fs_init();
// l� superbloco, retorna 0 se sucedidio, outro valor se erro
int t2fs_read_superblock(struct t2fs_superbloco* superbloco_p);


/////// VARIAVEIS INTERNAS ////////

// indica se t2fs foi inicializado
extern int t2fs_initialized;
// buffer superbloco
extern struct t2fs_superbloco t2fs_superbloco_info;
// caminho do diret�rio atual
extern char t2fs_cwd_path[256];
// cluster do diret�rio atual
extern unsigned int t2fs_cwd_cluster_num;

// numero m�ximo de arquivos em diret�rio
extern unsigned int t2fs_maximum_files_in_directory;

#endif
