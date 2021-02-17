#!/bin/bash

main_folder="../"
tex_path="../tex"
img_path="../images"
conf_path="../conf"
output_path="../output"
source_path="../source"
markdown_main_file="ReadMe.md"
doc_title="ReadMe"

pandoc "$source_path/$markdown_main_file" \
    -f gfm \
    --include-in-header "$tex_path"/chapter.tex \
    --include-in-header "$tex_path"/pdf_properties.tex \
    --include-in-header "$tex_path"/inline_code.tex \
    --include-before-body "$tex_path"/cover.tex\
    --table-of-contents\
    -V toc-title="Sommaire" \
    --metadata pagetitle="$doc_title"\
    -V linkcolor:blue \
    -V geometry:a4paper \
    -V geometry:margin=2cm \
    -V mainfont="DejaVu Serif" \
    -V monofont="DejaVu Sans Mono" \
    --pdf-engine=xelatex \
    -V fontsize=12pt \
    --highlight-style "$conf_path"/pygments.theme \
    -o "$tex_path/$doc_title"