	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:775 BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_234FB2
gText_Rom_234FB2: @ 0x08234FB2
	.string "…… ほら…… さっさと きえな………"
	.byte EOS
	.if (. - gText_Rom_234FB2) != 0x14
	.error "gText_Rom_234FB2 must retain its original byte length"
	.endif
