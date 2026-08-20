	@ field-script:0x2649AB FieldScriptText_265168
	.globl gText_Rom_265168
gText_Rom_265168: @ 0x08265168
	.string "うーん……\pそろそろ　コンテストに\nさんかして　みようかなー？\pもしも　どこかで　あたし　たちを\nみかけたら　ぜったい　おうえん　してねー！{EOS}"
	.if (. - gText_Rom_265168) > 0x47
	.error "gText_Rom_265168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265168) < 0x47
	.space 0x47 - (. - gText_Rom_265168)
	.endif
