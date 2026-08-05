	@ data/text/secret_base_trainers.inc:124 SecretBase_Text_Trainer3PreChampion
	.globl gText_Rom_24576B
gText_Rom_24576B: @ 0x0824576B
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ$"
	.if (. - gText_Rom_24576B) > 0x35
	.error "gText_Rom_24576B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24576B) < 0x35
	.space 0x35 - (. - gText_Rom_24576B)
	.endif
