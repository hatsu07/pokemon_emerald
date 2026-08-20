	@ data/maps/LilycoveCity/scripts.inc:429 LilycoveCity_Text_MayBattleMe
	.globl gText_Rom_1E0769
gText_Rom_1E0769: @ 0x081E0769
	.string "ハルカ『しょうぶ してあげるから\n{PLAYER}{KUN}の ポケモン みせてよ!{EOS}"
	.if (. - gText_Rom_1E0769) > 0x22
	.error "gText_Rom_1E0769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0769) < 0x22
	.space 0x22 - (. - gText_Rom_1E0769)
	.endif
