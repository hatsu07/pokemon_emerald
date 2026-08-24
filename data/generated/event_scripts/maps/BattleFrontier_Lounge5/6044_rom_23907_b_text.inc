	@ data/maps/BattleFrontier_Lounge5/scripts.inc:44 BattleFrontier_Lounge5_Text_NatureGirlGreeting
	.globl BattleFrontier_Lounge5_Text_NatureGirlGreeting
BattleFrontier_Lounge5_Text_NatureGirlGreeting: @ 0x08239014
	.string "へへ! あたち ポケモンの\nきもち わかるの!\pね! ポケモン みちて! みちて!"
	.byte EOS
	.if (. - BattleFrontier_Lounge5_Text_NatureGirlGreeting) > 0x2a
	.error "BattleFrontier_Lounge5_Text_NatureGirlGreeting may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge5_Text_NatureGirlGreeting) < 0x2a
	.space 0x2a - (. - BattleFrontier_Lounge5_Text_NatureGirlGreeting)
	.endif
	@ data/maps/BattleFrontier_Lounge5/scripts.inc:47 BattleFrontier_Lounge5_Text_NatureGirlNoneShown
	.globl BattleFrontier_Lounge5_Text_NatureGirlNoneShown
BattleFrontier_Lounge5_Text_NatureGirlNoneShown: @ 0x0823903E
	.string "ぷー! けち!!"
	.byte EOS
	.if (. - BattleFrontier_Lounge5_Text_NatureGirlNoneShown) > 0x9
	.error "BattleFrontier_Lounge5_Text_NatureGirlNoneShown may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge5_Text_NatureGirlNoneShown) < 0x9
	.space 0x9 - (. - BattleFrontier_Lounge5_Text_NatureGirlNoneShown)
	.endif
	@ data/maps/BattleFrontier_Lounge5/scripts.inc:50 BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow
	.globl gText_Rom_239047
gText_Rom_239047: @ 0x08239047
	.string "ふんふん……\pこのこ たたかうの ちゅき! って!\nいっぱい いたいいたい でも\lたたかうよ! って!"
	.byte EOS
	.if (. - gText_Rom_239047) > 0x34
	.error "gText_Rom_239047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239047) < 0x34
	.space 0x34 - (. - gText_Rom_239047)
	.endif
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
