	@ field-script:0x1E91B6 FieldScriptText_25B890
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B890
gText_Rom_25B890: @ 0x0825B890
	.string "わたしの　じまんは　こんなんじゃ\nおわりませんわ！\lなんかいも　つきあって　もらいますわよ！{EOS}"
	.if (. - gText_Rom_25B890) != 0x2f
	.error "gText_Rom_25B890 must retain its original byte length"
	.endif
