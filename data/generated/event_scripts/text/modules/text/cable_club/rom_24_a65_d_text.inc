	@ field-script:0x20714F FieldScriptText_24A60C
	.globl FieldScriptText_24A60C
FieldScriptText_24A60C: @ 0x0824A60C
	.string "つうしん　しています……{EOS}"
	.if (. - FieldScriptText_24A60C) > 0xd
	.error "FieldScriptText_24A60C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A60C) < 0xd
	.space 0xd - (. - FieldScriptText_24A60C)
	.endif
	@ field-script:0x2071CB FieldScriptText_24A619
	.globl FieldScriptText_24A619
FieldScriptText_24A619: @ 0x0824A619
	.string "つうしんに　しっぱい　しました{EOS}"
	.if (. - FieldScriptText_24A619) > 0x10
	.error "FieldScriptText_24A619 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A619) < 0x10
	.space 0x10 - (. - FieldScriptText_24A619)
	.endif
	@ field-script:0x207187 FieldScriptText_24A629
	.globl FieldScriptText_24A629
FieldScriptText_24A629: @ 0x0824A629
	.string "えらんだ　コンテストが\nおともだちと　ちがう　ようです！{EOS}"
	.if (. - FieldScriptText_24A629) > 0x1d
	.error "FieldScriptText_24A629 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A629) < 0x1d
	.space 0x1d - (. - FieldScriptText_24A629)
	.endif
	@ field-script:0x207195 FieldScriptText_24A646
	.globl FieldScriptText_24A646
FieldScriptText_24A646: @ 0x0824A646
	.string "おたがいの　せんたくが　ちがっているようです{EOS}"
	.if (. - FieldScriptText_24A646) > 0x17
	.error "FieldScriptText_24A646 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24A646) < 0x17
	.space 0x17 - (. - FieldScriptText_24A646)
	.endif
	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_24A65D
gText_Rom_24A65D: @ 0x0824A65D
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_Rom_24A65D) > 0x1e
	.error "gText_Rom_24A65D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A65D) < 0x1e
	.space 0x1e - (. - gText_Rom_24A65D)
	.endif
	@ analyzed canonical ROM range 0x0824A67B-0x0824A6A9
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0824A67B: @ 0x0824A67B
EventText_JP_0824A67B: @ 0x0824A67B
	.string "またの　さんかを　おまち　してます!{EOS}"
EventText_JP_0824A68E: @ 0x0824A68E
	.string "つうしん　エラーです\nもう1ど　やりなおして　ください{EOS}"
