	@ field-script:0x23A42C FieldScriptText_23A8CD
	.globl gText_Rom_23A8CD
gText_Rom_23A8CD: @ 0x0823A8CD
	.string "バトルアリーナは　バトルフロンティアの\nちゅうおう　みぎに　いちする\lどうじょうの　ような　たてものです\pこちらでは　かちぬきチームバトル　という\nイベントを　かいさい　しております！"
	.byte EOS
	.if (. - gText_Rom_23A8CD) > 0x5d
	.error "gText_Rom_23A8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A8CD) < 0x5d
	.space 0x5d - (. - gText_Rom_23A8CD)
	.endif
