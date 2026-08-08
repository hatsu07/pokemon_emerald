	@ data/maps/BattleFrontier_Lounge3/scripts.inc:242 BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe
	.globl gText_Rom_237EFE
gText_Rom_237EFE: @ 0x08237EFE
	.string "あんたにも もうけさせて やるからよぅー\nサクっと ちょうせん してきて くんねぇ?"
	.byte EOS
	.if (. - gText_Rom_237EFE) > 0x2b
	.error "gText_Rom_237EFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237EFE) < 0x2b
	.space 0x2b - (. - gText_Rom_237EFE)
	.endif
