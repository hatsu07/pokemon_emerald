	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:34 AbandonedShip_Rooms_1F_Text_TakingALookAround
	.globl gText_Rom_21AA80
gText_Rom_21AA80: @ 0x0821AA80
	.string "こういった ふねは めずらしいので\nけんがく しておるのですよ\pフムフム……\nほかにも へやが ありそうですな"
	.byte EOS
	.if (. - gText_Rom_21AA80) > 0x38
	.error "gText_Rom_21AA80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AA80) < 0x38
	.space 0x38 - (. - gText_Rom_21AA80)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:37 AbandonedShip_Rooms_1F_Text_ThaliaIntro (+1 aliases)
	.globl gText_Rom_21AAB8
gText_Rom_21AAB8: @ 0x0821AAB8
	.string "あら こんな ところまで きて\nキミも ものずきね!"
	.byte EOS
	.if (. - gText_Rom_21AAB8) > 0x1b
	.error "gText_Rom_21AAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAB8) < 0x1b
	.space 0x1b - (. - gText_Rom_21AAB8)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:40 AbandonedShip_Rooms_1F_Text_ThaliaDefeat (+1 aliases)
	.globl gText_Rom_21AAD3
gText_Rom_21AAD3: @ 0x0821AAD3
	.string "ものずき だけじゃ なくて\nつよいのか……"
	.byte EOS
	.if (. - gText_Rom_21AAD3) > 0x16
	.error "gText_Rom_21AAD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AAD3) < 0x16
	.space 0x16 - (. - gText_Rom_21AAD3)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AAE9
gText_Rom_21AAE9: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら"
	.byte EOS
	.if (. - gText_Rom_21AAE9) != 0x31
	.error "gText_Rom_21AAE9 must retain its original byte length"
	.endif
	.globl gText_Rom_21AB16
	.set gText_Rom_21AB16, gText_Rom_21AAE9 + 0x2d
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:46 AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.globl gText_Rom_21AB1A
gText_Rom_21AB1A: @ 0x0821AB1A
	.string "つよい トレーナーの キミを\nきねんに とうろく させて ちょうだいね!"
	.byte EOS
	.if (. - gText_Rom_21AB1A) > 0x25
	.error "gText_Rom_21AB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB1A) < 0x25
	.space 0x25 - (. - gText_Rom_21AB1A)
	.endif
