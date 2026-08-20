	@ field-script:0x20F30E FieldScriptText_20F355
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20F355
gText_Rom_20F355: @ 0x0820F355
	.string "うむう……\nルネシティに　こもること　30ねん……\pわしが　あみだした　ひっさつの　わざマシン！\nおまえに　ゆずろう！{EOS}"
	.if (. - gText_Rom_20F355) != 0x3c
	.error "gText_Rom_20F355 must retain its original byte length"
	.endif
