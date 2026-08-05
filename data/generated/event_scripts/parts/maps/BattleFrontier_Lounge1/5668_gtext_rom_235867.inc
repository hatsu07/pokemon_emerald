	@ data/maps/BattleFrontier_Lounge1/scripts.inc:165 BattleFrontier_Lounge1_Text_OutstandingAbility
	.globl gText_Rom_235867
gText_Rom_235867: @ 0x08235867
	.string "…… んー\pこいつは ぜんたいてきに いうと\nすばらしい のうりょく じゃな!"
	.byte EOS
	.if (. - gText_Rom_235867) > 0x28
	.error "gText_Rom_235867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235867) < 0x28
	.space 0x28 - (. - gText_Rom_235867)
	.endif
