	@ src/battle_message.c:518 battle_message_line_518
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFFA
gText_Rom_5ABFFA: @ 0x085ABFFA
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に まけた！$"
	.if (. - gText_Rom_5ABFFA) != 0x18
	.error "gText_Rom_5ABFFA must retain its original byte length"
	.endif
