	@ data/text/shoal_cave.inc:29 ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell
	.globl gText_Rom_26417E
gText_Rom_26417E: @ 0x0826417E
	.string "ポケモンに もたせてあげると よろこぶよ\pなんたって かいがらのすずの ねいろは\nてんか いっぴん だからね\pかいがらのすずの ざいりょう なら\nまいにち とれるから\lそろえば また つくらせて もらうよ$"
	.if (. - gText_Rom_26417E) > 0x67
	.error "gText_Rom_26417E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26417E) < 0x67
	.space 0x67 - (. - gText_Rom_26417E)
	.endif
