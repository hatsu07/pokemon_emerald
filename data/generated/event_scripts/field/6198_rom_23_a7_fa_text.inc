	@ field-script:0x23A410 FieldScriptText_23A7FA
	.globl gText_Rom_23A7FA
gText_Rom_23A7FA: @ 0x0823A7FA
	.string "バトルドームは　たまごの　ような\nかたちをした　おおきな　たてものです\pこちらでは　バトルトーナメント　という\nイベントが　かいさいされて　います\pなお　バトルトーナメントには\nシングルバトルよう　ダブルバトルようの\l2つの　コースが　あります！"
	.byte EOS
	.if (. - gText_Rom_23A7FA) > 0x7c
	.error "gText_Rom_23A7FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A7FA) < 0x7c
	.space 0x7c - (. - gText_Rom_23A7FA)
	.endif
