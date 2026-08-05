	@ field-script:0x248B44 FieldScriptText_24A126
	.globl gText_Rom_24A126
gText_Rom_24A126: @ 0x0824A126
	.string "コンテストでの　ゆうしょう\nおめでとう　ございます！\pしょうひんは　こちらで　おあずかり\nして　ありますよ！　さあ　どうぞ！$"
	.if (. - gText_Rom_24A126) > 0x3f
	.error "gText_Rom_24A126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A126) < 0x3f
	.space 0x3f - (. - gText_Rom_24A126)
	.endif
