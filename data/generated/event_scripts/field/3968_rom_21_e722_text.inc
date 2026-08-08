	@ field-script:0x21E599 FieldScriptText_21E722
	.globl gText_Rom_21E722
gText_Rom_21E722: @ 0x0821E722
	.string "ジン『ぼくたちの　ラブラブ　パワーでも\nかてないのは　はじめて　だよ！\lきみは　すごい　トレーナー　なんだね！"
	.byte EOS
	.if (. - gText_Rom_21E722) > 0x38
	.error "gText_Rom_21E722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E722) < 0x38
	.space 0x38 - (. - gText_Rom_21E722)
	.endif
