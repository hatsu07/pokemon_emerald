	@ data/text/apprentice.inc:76 gText_ApprenticeRejectTeaching2
	.globl gText_Rom_26D2F4
gText_Rom_26D2F4: @ 0x0826D2F4
	.string "そんなあ!\nぼく どうしても ポケモントレーナーに\lなりたいんです!\pしつもんに こたえて もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D2F4) > 0x36
	.error "gText_Rom_26D2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D2F4) < 0x36
	.space 0x36 - (. - gText_Rom_26D2F4)
	.endif
