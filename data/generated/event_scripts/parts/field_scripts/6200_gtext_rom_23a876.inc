	@ field-script:0x23A41E FieldScriptText_23A876
	.globl gText_Rom_23A876
gText_Rom_23A876: @ 0x0823A876
	.string "バトルパレスは　バトルフロンティアの\nみぎはじに　ある　あかい　たてものです\pこちらの　たてもの　では\nシングル　ダブルの　2つの\lバトルホールへの　ちょうせんが　できます"
	.byte EOS
	.if (. - gText_Rom_23A876) > 0x57
	.error "gText_Rom_23A876 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A876) < 0x57
	.space 0x57 - (. - gText_Rom_23A876)
	.endif
