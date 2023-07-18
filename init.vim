:set number
:set autoindent
:set tabstop=4
:set shiftwidth=4
:set smarttab
:set softtabstop=4
:set mouse=a
:colorscheme jellybeans

call plug#begin()

Plug 'https://github.com/preservim/nerdtree' "nerdTree
Plug 'https://github.com/neoclide/coc.nvim'  "auto complete
Plug 'https://github.com/vim-airline/vim-airline' "status bar
Plug 'https://github.com/ap/vim-css-color'
Plug 'https://github.com/rafi/awesome-vim-colorschemes'


call plug#end()

let g:NERDTreeDirArrowExpandable=+
let g:NERDTreeDirArrowCollapsible=~

