	@ data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc:395 BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll
	.globl gText_Rom_236677
gText_Rom_236677: @ 0x08236677
	.string "あーっ!? なんだぁーっ?\pなーに おれの ぬいぐるみ みてんだっ!\nほしければ じぶんで てにいれろよっ!\pねっ ねっ ムチュール ちゃん!"
	.byte EOS
	.if (. - gText_Rom_236677) > 0x48
	.error "gText_Rom_236677 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236677) < 0x48
	.space 0x48 - (. - gText_Rom_236677)
	.endif
