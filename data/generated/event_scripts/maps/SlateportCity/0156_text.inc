	@ data/maps/SlateportCity/scripts.inc:1330 SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou
	.globl gText_Rom_1DD8E2
gText_Rom_1DD8E2: @ 0x081DD8E2
	.string "エニシダ『ホントは きみに\nくっついて いきたい ところ だけど\lほかのひとの さいのうも きになるし\pもうすこし いろんな まちを\nたずね あるいて みるよ!\pじゃあね {PLAYER}{KUN}!{EOS}"
	.if (. - gText_Rom_1DD8E2) > 0x5c
	.error "gText_Rom_1DD8E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD8E2) < 0x5c
	.space 0x5c - (. - gText_Rom_1DD8E2)
	.endif
