	@ field-script:0x23A285 FieldScriptText_23A60F
	.globl gText_Rom_23A60F
gText_Rom_23A60F: @ 0x0823A60F
	.string "はじめての　おきゃくさまには\nバトルフロンティアの　なかで\lごりよう　いただける　フロンティアパスを\lはっこうして　おります！\pどうぞ　おうけとり　ください！"
	.byte EOS
	.if (. - gText_Rom_23A60F) > 0x50
	.error "gText_Rom_23A60F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A60F) < 0x50
	.space 0x50 - (. - gText_Rom_23A60F)
	.endif
