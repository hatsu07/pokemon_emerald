	@ data/maps/AquaHideout_B2F/scripts.inc:116 AquaHideout_B2F_Text_Grunt6PostBattle
	.globl gText_Rom_218297
gText_Rom_218297: @ 0x08218297
	.string "そういえば…… マスターボールを\nどこに おいたのか わすれちゃったわ\pあれを まもっていないと\nリーダーに おこられるのよ……$"
	.if (. - gText_Rom_218297) > 0x41
	.error "gText_Rom_218297 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218297) < 0x41
	.space 0x41 - (. - gText_Rom_218297)
	.endif
