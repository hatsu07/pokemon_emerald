	@ field-script:0x2071C1 FieldScriptText_24AB11
	.globl gText_Rom_24AB11
gText_Rom_24AB11: @ 0x0824AB11
	.string "もうしわけ　ありません！\pワイヤレスアダプタでは\nグローバルモードは　おこなえません！\pエメラルドモードを　えらぶか\nつうしんケーブルを　つなげて\lやりなおして　ください！{EOS}"
	.if (. - gText_Rom_24AB11) > 0x57
	.error "gText_Rom_24AB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB11) < 0x57
	.space 0x57 - (. - gText_Rom_24AB11)
	.endif
