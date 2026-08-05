	@ field-script:0x23A43A FieldScriptText_23A92A
	.globl gText_Rom_23A92A
gText_Rom_23A92A: @ 0x0823A92A
	.string "バトルファクトリーは　ここをでて　いちばん\nちかくにある　おおきな　ビルに　なります\pこちらでは　バトルトレード　という\nイベントを　かいさいして　おります\pなお　バトルトレードには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　ようい　されています！"
	.byte EOS
	.if (. - gText_Rom_23A92A) > 0x85
	.error "gText_Rom_23A92A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A92A) < 0x85
	.space 0x85 - (. - gText_Rom_23A92A)
	.endif
