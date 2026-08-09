	@ data/maps/BattleFrontier_Lounge5/scripts.inc:68 BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow
	.globl gText_Rom_23907B
gText_Rom_23907B: @ 0x0823907B
	.string "ふんふん……\pこのこ ずるいの ちゅき! って!\nでも あんまし いたいいたい だと\lちかえし してやる! って!"
	.byte EOS
	.if (. - gText_Rom_23907B) > 0x3a
	.error "gText_Rom_23907B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23907B) < 0x3a
	.space 0x3a - (. - gText_Rom_23907B)
	.endif
	@ Embedded ROM bytes: file offset 0x2390B5, size 0x40
	@ semanticized-mass: charmap string (64 bytes including EOS)
	.string "ふんふん……\pこのこ　たたかうの　ちゅき！　って！\nだけど　あんまし　いたいいたい　だと\lじぶんが　ちんぱい　なるよ！　って！"
	.byte EOS
