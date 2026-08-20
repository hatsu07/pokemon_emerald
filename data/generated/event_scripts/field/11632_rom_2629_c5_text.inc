	@ field-script:0x212B4D FieldScriptText_2629C5
	.globl gText_Rom_2629C5
gText_Rom_2629C5: @ 0x082629C5
	.string "サファリゾーンの　おとくな　じょうほう！\pであった　ポケモンに\nポロックを　なげると　にげにくく　なります！{EOS}"
	.if (. - gText_Rom_2629C5) > 0x37
	.error "gText_Rom_2629C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2629C5) < 0x37
	.space 0x37 - (. - gText_Rom_2629C5)
	.endif
