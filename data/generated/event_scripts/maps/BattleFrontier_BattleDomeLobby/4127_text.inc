	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:494 BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd (+1 aliases)
	.globl gText_Rom_220BA0
gText_Rom_220BA0: @ 0x08220BA0
	.string "じゅんびが できましたら\nまた おこし ください"
	.byte EOS
	.if (. - gText_Rom_220BA0) > 0x19
	.error "gText_Rom_220BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220BA0) < 0x19
	.space 0x19 - (. - gText_Rom_220BA0)
	.endif
