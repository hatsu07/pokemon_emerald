	@ field-script:0x1DC4E1 FieldScriptText_24390F
	.globl FieldScriptText_24390F
FieldScriptText_24390F: @ 0x0824390F
	.string "ようこそ！\pおかいもの　ですね！{EOS}"
	.if (. - FieldScriptText_24390F) > 0x11
	.error "FieldScriptText_24390F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24390F) < 0x11
	.space 0x11 - (. - FieldScriptText_24390F)
	.endif
	@ field-script:0x1DC13E FieldScriptText_243920
	.globl FieldScriptText_243920
FieldScriptText_243920: @ 0x08243920
	.string "またどうぞ！{EOS}"
	.if (. - FieldScriptText_243920) > 0x7
	.error "FieldScriptText_243920 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243920) < 0x7
	.space 0x7 - (. - FieldScriptText_243920)
	.endif
	@ field-script:0x211A4D FieldScriptText_243927
	.globl FieldScriptText_243927
FieldScriptText_243927: @ 0x08243927
	.string "{0xFD}{0x01}{0xFD}{0x05}　いらっしゃい！\pおかいものね！{EOS}"
	.if (. - FieldScriptText_243927) > 0x15
	.error "FieldScriptText_243927 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243927) < 0x15
	.space 0x15 - (. - FieldScriptText_243927)
	.endif
	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_ObtainedTheItem
gText_ObtainedTheItem: @ 0x0824393C
	.string "{STR_VAR_2}を てにいれた!{EOS}"
	.if (. - gText_ObtainedTheItem) > 0xb
	.error "gText_ObtainedTheItem may not grow beyond its original slot"
	.endif
	.if (. - gText_ObtainedTheItem) < 0xb
	.space 0xb - (. - gText_ObtainedTheItem)
	.endif

	@ data/text/obtain_item.inc:4 gText_TheBagIsFull
	.globl gText_TheBagIsFull
gText_TheBagIsFull: @ 0x08243947
	.string "バッグが いっぱいだ!{EOS}"
	.if (. - gText_TheBagIsFull) > 0xc
	.error "gText_TheBagIsFull may not grow beyond its original slot"
	.endif
	.if (. - gText_TheBagIsFull) < 0xc
	.space 0xc - (. - gText_TheBagIsFull)
	.endif

	@ data/text/obtain_item.inc:7 gText_PutItemInPocket
	.globl gText_PutItemInPocket
gText_PutItemInPocket: @ 0x08243953
	.string "{PLAYER}は {STR_VAR_2}を\n{STR_VAR_3}ポケットに しまった!{EOS}"
	.if (. - gText_PutItemInPocket) > 0x16
	.error "gText_PutItemInPocket may not grow beyond its original slot"
	.endif
	.if (. - gText_PutItemInPocket) < 0x16
	.space 0x16 - (. - gText_PutItemInPocket)
	.endif

	@ data/text/obtain_item.inc:11 gText_PlayerFoundOneItem
	.globl gText_PlayerFoundOneItem
gText_PlayerFoundOneItem: @ 0x08243969
	.string "{PLAYER}は {STR_VAR_2}を\nみつけた!{EOS}"
	.if (. - gText_PlayerFoundOneItem) > 0xe
	.error "gText_PlayerFoundOneItem may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayerFoundOneItem) < 0xe
	.space 0xe - (. - gText_PlayerFoundOneItem)
	.endif

	@ data/text/obtain_item.inc:15 gText_TooBadBagIsFull
	.globl gText_TooBadBagIsFull
gText_TooBadBagIsFull: @ 0x08243977
	.string "ざんねん!\nバッグが いっぱいだ……{EOS}"
	.if (. - gText_TooBadBagIsFull) > 0x13
	.error "gText_TooBadBagIsFull may not grow beyond its original slot"
	.endif
	.if (. - gText_TooBadBagIsFull) < 0x13
	.space 0x13 - (. - gText_TooBadBagIsFull)
	.endif

	@ data/text/obtain_item.inc:19 gText_PlayerPutItemInBag
	.globl gText_PlayerPutItemInBag
gText_PlayerPutItemInBag: @ 0x0824398A
	.string "{PLAYER}は {STR_VAR_2}を\nバッグに しまった!{EOS}"
	.if (. - gText_PlayerPutItemInBag) > 0x13
	.error "gText_PlayerPutItemInBag may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayerPutItemInBag) < 0x13
	.space 0x13 - (. - gText_PlayerPutItemInBag)
	.endif

	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_ObtainedTheItem_Copy_Rom_24399D
gText_ObtainedTheItem_Copy_Rom_24399D: @ 0x0824399D
	.string "{STR_VAR_2}を てにいれた!{EOS}"
	.if (. - gText_ObtainedTheItem_Copy_Rom_24399D) > 0xb
	.error "gText_ObtainedTheItem_Copy_Rom_24399D may not grow beyond its original slot"
	.endif
	.if (. - gText_ObtainedTheItem_Copy_Rom_24399D) < 0xb
	.space 0xb - (. - gText_ObtainedTheItem_Copy_Rom_24399D)
	.endif

	@ data/text/obtain_item.inc:26 gText_NoRoomLeftForAnother
	.globl gText_NoRoomLeftForAnother
gText_NoRoomLeftForAnother: @ 0x082439A8
	.string "ざんねん! {STR_VAR_2}を\nいれる ばしょが いっぱいだ……{EOS}"
	.if (. - gText_NoRoomLeftForAnother) > 0x1b
	.error "gText_NoRoomLeftForAnother may not grow beyond its original slot"
	.endif
	.if (. - gText_NoRoomLeftForAnother) < 0x1b
	.space 0x1b - (. - gText_NoRoomLeftForAnother)
	.endif

	@ data/text/obtain_item.inc:30 gText_TheDecorWasTransferredToThePC
	.globl gText_TheDecorWasTransferredToThePC
gText_TheDecorWasTransferredToThePC: @ 0x082439C3
	.string "{STR_VAR_2}は\nパソコンに てんそうされた!{EOS}"
	.if (. - gText_TheDecorWasTransferredToThePC) > 0x13
	.error "gText_TheDecorWasTransferredToThePC may not grow beyond its original slot"
	.endif
	.if (. - gText_TheDecorWasTransferredToThePC) < 0x13
	.space 0x13 - (. - gText_TheDecorWasTransferredToThePC)
	.endif
