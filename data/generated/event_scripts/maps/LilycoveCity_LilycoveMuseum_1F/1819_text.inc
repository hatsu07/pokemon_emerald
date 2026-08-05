	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:209 LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts
	.globl gText_Rom_206021
gText_Rom_206021: @ 0x08206021
	.string "ポケモン しょうぶも いいけど\pげいじゅつを あいする きもちも\nわすれずに いないとね!$"
	.if (. - gText_Rom_206021) > 0x2e
	.error "gText_Rom_206021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206021) < 0x2e
	.space 0x2e - (. - gText_Rom_206021)
	.endif
