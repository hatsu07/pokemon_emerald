	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:34 AbandonedShip_Rooms_1F_Text_TakingALookAround
	.globl AbandonedShip_Rooms_1F_Text_TakingALookAround
AbandonedShip_Rooms_1F_Text_TakingALookAround: @ 0x0821AA80
	.string "こういった ふねは めずらしいので\nけんがく しておるのですよ\pフムフム……\nほかにも へやが ありそうですな"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_TakingALookAround) > 0x38
	.error "AbandonedShip_Rooms_1F_Text_TakingALookAround may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_TakingALookAround) < 0x38
	.space 0x38 - (. - AbandonedShip_Rooms_1F_Text_TakingALookAround)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:37 AbandonedShip_Rooms_1F_Text_ThaliaIntro (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaIntro
AbandonedShip_Rooms_1F_Text_ThaliaIntro: @ 0x0821AAB8
	.string "あら こんな ところまで きて\nキミも ものずきね!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro) > 0x1b
	.error "AbandonedShip_Rooms_1F_Text_ThaliaIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro) < 0x1b
	.space 0x1b - (. - AbandonedShip_Rooms_1F_Text_ThaliaIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:40 AbandonedShip_Rooms_1F_Text_ThaliaDefeat (+1 aliases)
	.globl AbandonedShip_Rooms_1F_Text_ThaliaDefeat
AbandonedShip_Rooms_1F_Text_ThaliaDefeat: @ 0x0821AAD3
	.string "ものずき だけじゃ なくて\nつよいのか……"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat) > 0x16
	.error "AbandonedShip_Rooms_1F_Text_ThaliaDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat) < 0x16
	.space 0x16 - (. - AbandonedShip_Rooms_1F_Text_ThaliaDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaPostBattle) != 0x31
	.error "AbandonedShip_Rooms_1F_Text_ThaliaPostBattle must retain its original byte length"
	.endif
	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:46 AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.globl AbandonedShip_Rooms_1F_Text_ThaliaRegister
AbandonedShip_Rooms_1F_Text_ThaliaRegister: @ 0x0821AB1A
	.string "つよい トレーナーの キミを\nきねんに とうろく させて ちょうだいね!"
	.byte EOS
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister) > 0x25
	.error "AbandonedShip_Rooms_1F_Text_ThaliaRegister may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister) < 0x25
	.space 0x25 - (. - AbandonedShip_Rooms_1F_Text_ThaliaRegister)
	.endif
