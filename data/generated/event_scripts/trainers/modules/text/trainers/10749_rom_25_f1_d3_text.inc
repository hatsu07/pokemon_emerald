	@ data/text/trainers.inc:2207 Route120_Text_ClarissaPostBattle
	.globl gText_Rom_25F1D3
gText_Rom_25F1D3: @ 0x0825F1D3
	.string "あたしの ポケモンたちも\nあつい ひざしは にがてだと おもうの\lだから こうして パラソルを もってるのよ$"
	.if (. - gText_Rom_25F1D3) > 0x37
	.error "gText_Rom_25F1D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F1D3) < 0x37
	.space 0x37 - (. - gText_Rom_25F1D3)
	.endif
