	@ data/text/battle_tent.inc:111 FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274EB4
gText_Rom_274EB4: @ 0x08274EB4
	.string "おつかれさまでした!\pレポートを かきますので\nおまちくだされ!$"
	.if (. - gText_Rom_274EB4) != 0x21
	.error "gText_Rom_274EB4 must retain its original byte length"
	.endif
