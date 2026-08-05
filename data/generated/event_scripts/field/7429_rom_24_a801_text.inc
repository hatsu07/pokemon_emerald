	@ field-script:0x2071A3 FieldScriptText_24A801
	.globl gText_Rom_24A801
gText_Rom_24A801: @ 0x0824A801
	.string "ともだちの　なかに\n4にんせんようの　うけつけから\lエントリーしている　かたが　います\pつうしんケーブルを　つなげた　ともだちを\n4にん　あつめて\lグローバルモードを　えらんで\lとうろくを　やりなおして　ください$"
	.if (. - gText_Rom_24A801) > 0x6b
	.error "gText_Rom_24A801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A801) < 0x6b
	.space 0x6b - (. - gText_Rom_24A801)
	.endif
