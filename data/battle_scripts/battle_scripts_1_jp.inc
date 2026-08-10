@ Japanese Emerald battle scripts (move effects and shared battle scripts).
@ Recovered from ROM bytes with command widths taken from battle_script.inc.

	.globl gUnknown_8286C30
gUnknown_8286C30:
	.globl gBattleScriptsForMoveEffects
gBattleScriptsForMoveEffects: @ 0x08286C30
	.4byte BattleScript_EFFECT_HIT @ EFFECT_HIT
	.4byte BattleScript_EFFECT_SLEEP @ EFFECT_SLEEP
	.4byte BattleScript_EFFECT_POISON_HIT @ EFFECT_POISON_HIT
	.4byte BattleScript_EFFECT_ABSORB @ EFFECT_ABSORB
	.4byte BattleScript_EFFECT_BURN_HIT @ EFFECT_BURN_HIT
	.4byte BattleScript_EFFECT_FREEZE_HIT @ EFFECT_FREEZE_HIT
	.4byte BattleScript_EFFECT_PARALYZE_HIT @ EFFECT_PARALYZE_HIT
	.4byte BattleScript_EFFECT_EXPLOSION @ EFFECT_EXPLOSION
	.4byte BattleScript_EFFECT_DREAM_EATER @ EFFECT_DREAM_EATER
	.4byte BattleScript_EFFECT_MIRROR_MOVE @ EFFECT_MIRROR_MOVE
	.4byte BattleScript_EFFECT_ATTACK_UP @ EFFECT_ATTACK_UP
	.4byte BattleScript_EFFECT_DEFENSE_UP @ EFFECT_DEFENSE_UP
	.4byte BattleScript_EFFECT_HIT @ EFFECT_SPEED_UP
	.4byte BattleScript_EFFECT_SPECIAL_ATTACK_UP @ EFFECT_SPECIAL_ATTACK_UP
	.4byte BattleScript_EFFECT_HIT @ EFFECT_SPECIAL_DEFENSE_UP
	.4byte BattleScript_EFFECT_HIT @ EFFECT_ACCURACY_UP
	.4byte BattleScript_EFFECT_EVASION_UP @ EFFECT_EVASION_UP
	.4byte BattleScript_EFFECT_HIT @ EFFECT_ALWAYS_HIT
	.4byte BattleScript_EFFECT_ATTACK_DOWN @ EFFECT_ATTACK_DOWN
	.4byte BattleScript_EFFECT_DEFENSE_DOWN @ EFFECT_DEFENSE_DOWN
	.4byte BattleScript_EFFECT_SPEED_DOWN @ EFFECT_SPEED_DOWN
	.4byte BattleScript_EFFECT_HIT @ EFFECT_SPECIAL_ATTACK_DOWN
	.4byte BattleScript_EFFECT_HIT @ EFFECT_SPECIAL_DEFENSE_DOWN
	.4byte BattleScript_EFFECT_ACCURACY_DOWN @ EFFECT_ACCURACY_DOWN
	.4byte BattleScript_EFFECT_EVASION_DOWN @ EFFECT_EVASION_DOWN
	.4byte BattleScript_EFFECT_HAZE @ EFFECT_HAZE
	.4byte BattleScript_EFFECT_BIDE @ EFFECT_BIDE
	.4byte BattleScript_EFFECT_RAMPAGE @ EFFECT_RAMPAGE
	.4byte BattleScript_EFFECT_ROAR @ EFFECT_ROAR
	.4byte BattleScript_EFFECT_MULTI_HIT @ EFFECT_MULTI_HIT
	.4byte BattleScript_EFFECT_CONVERSION @ EFFECT_CONVERSION
	.4byte BattleScript_EFFECT_FLINCH_HIT @ EFFECT_FLINCH_HIT
	.4byte BattleScript_EFFECT_RESTORE_HP @ EFFECT_RESTORE_HP
	.4byte BattleScript_EFFECT_TOXIC @ EFFECT_TOXIC
	.4byte BattleScript_EFFECT_PAY_DAY @ EFFECT_PAY_DAY
	.4byte BattleScript_EFFECT_LIGHT_SCREEN @ EFFECT_LIGHT_SCREEN
	.4byte BattleScript_EFFECT_TRI_ATTACK @ EFFECT_TRI_ATTACK
	.4byte BattleScript_EFFECT_REST @ EFFECT_REST
	.4byte BattleScript_EFFECT_OHKO @ EFFECT_OHKO
	.4byte BattleScript_EFFECT_RAZOR_WIND @ EFFECT_RAZOR_WIND
	.4byte BattleScript_EFFECT_SUPER_FANG @ EFFECT_SUPER_FANG
	.4byte BattleScript_EFFECT_DRAGON_RAGE @ EFFECT_DRAGON_RAGE
	.4byte BattleScript_EFFECT_TRAP @ EFFECT_TRAP
	.4byte BattleScript_EFFECT_HIT @ EFFECT_HIGH_CRITICAL
	.4byte BattleScript_EFFECT_DOUBLE_HIT @ EFFECT_DOUBLE_HIT
	.4byte BattleScript_EFFECT_RECOIL_IF_MISS @ EFFECT_RECOIL_IF_MISS
	.4byte BattleScript_EFFECT_MIST @ EFFECT_MIST
	.4byte BattleScript_EFFECT_FOCUS_ENERGY @ EFFECT_FOCUS_ENERGY
	.4byte BattleScript_EFFECT_RECOIL @ EFFECT_RECOIL
	.4byte BattleScript_EFFECT_CONFUSE @ EFFECT_CONFUSE
	.4byte BattleScript_EFFECT_ATTACK_UP_2 @ EFFECT_ATTACK_UP_2
	.4byte BattleScript_EFFECT_DEFENSE_UP_2 @ EFFECT_DEFENSE_UP_2
	.4byte BattleScript_EFFECT_SPEED_UP_2 @ EFFECT_SPEED_UP_2
	.4byte BattleScript_EFFECT_SPECIAL_ATTACK_UP_2 @ EFFECT_SPECIAL_ATTACK_UP_2
	.4byte BattleScript_EFFECT_SPECIAL_DEFENSE_UP_2 @ EFFECT_SPECIAL_DEFENSE_UP_2
	.4byte BattleScript_EFFECT_HIT @ EFFECT_ACCURACY_UP_2
	.4byte BattleScript_EFFECT_HIT @ EFFECT_EVASION_UP_2
	.4byte BattleScript_EFFECT_TRANSFORM @ EFFECT_TRANSFORM
	.4byte BattleScript_EFFECT_ATTACK_DOWN_2 @ EFFECT_ATTACK_DOWN_2
	.4byte BattleScript_EFFECT_DEFENSE_DOWN_2 @ EFFECT_DEFENSE_DOWN_2
	.4byte BattleScript_EFFECT_SPEED_DOWN_2 @ EFFECT_SPEED_DOWN_2
	.4byte BattleScript_EFFECT_HIT @ EFFECT_SPECIAL_ATTACK_DOWN_2
	.4byte BattleScript_EFFECT_SPECIAL_DEFENSE_DOWN_2 @ EFFECT_SPECIAL_DEFENSE_DOWN_2
	.4byte BattleScript_EFFECT_HIT @ EFFECT_ACCURACY_DOWN_2
	.4byte BattleScript_EFFECT_HIT @ EFFECT_EVASION_DOWN_2
	.4byte BattleScript_EFFECT_REFLECT @ EFFECT_REFLECT
	.4byte BattleScript_EFFECT_POISON @ EFFECT_POISON
	.4byte BattleScript_EFFECT_PARALYZE @ EFFECT_PARALYZE
	.4byte BattleScript_EFFECT_ATTACK_DOWN_HIT @ EFFECT_ATTACK_DOWN_HIT
	.4byte BattleScript_EFFECT_DEFENSE_DOWN_HIT @ EFFECT_DEFENSE_DOWN_HIT
	.4byte BattleScript_EFFECT_SPEED_DOWN_HIT @ EFFECT_SPEED_DOWN_HIT
	.4byte BattleScript_EFFECT_SPECIAL_ATTACK_DOWN_HIT @ EFFECT_SPECIAL_ATTACK_DOWN_HIT
	.4byte BattleScript_EFFECT_SPECIAL_DEFENSE_DOWN_HIT @ EFFECT_SPECIAL_DEFENSE_DOWN_HIT
	.4byte BattleScript_EFFECT_ACCURACY_DOWN_HIT @ EFFECT_ACCURACY_DOWN_HIT
	.4byte BattleScript_EFFECT_HIT @ EFFECT_EVASION_DOWN_HIT
	.4byte BattleScript_EFFECT_SKY_ATTACK @ EFFECT_SKY_ATTACK
	.4byte BattleScript_EFFECT_CONFUSE_HIT @ EFFECT_CONFUSE_HIT
	.4byte BattleScript_EFFECT_TWINEEDLE @ EFFECT_TWINEEDLE
	.4byte BattleScript_EFFECT_HIT @ EFFECT_VITAL_THROW
	.4byte BattleScript_EFFECT_SUBSTITUTE @ EFFECT_SUBSTITUTE
	.4byte BattleScript_EFFECT_RECHARGE @ EFFECT_RECHARGE
	.4byte BattleScript_EFFECT_RAGE @ EFFECT_RAGE
	.4byte BattleScript_EFFECT_MIMIC @ EFFECT_MIMIC
	.4byte BattleScript_EFFECT_METRONOME @ EFFECT_METRONOME
	.4byte BattleScript_EFFECT_LEECH_SEED @ EFFECT_LEECH_SEED
	.4byte BattleScript_EFFECT_SPLASH @ EFFECT_SPLASH
	.4byte BattleScript_EFFECT_DISABLE @ EFFECT_DISABLE
	.4byte BattleScript_EFFECT_LEVEL_DAMAGE @ EFFECT_LEVEL_DAMAGE
	.4byte BattleScript_EFFECT_PSYWAVE @ EFFECT_PSYWAVE
	.4byte BattleScript_EFFECT_COUNTER @ EFFECT_COUNTER
	.4byte BattleScript_EFFECT_ENCORE @ EFFECT_ENCORE
	.4byte BattleScript_EFFECT_PAIN_SPLIT @ EFFECT_PAIN_SPLIT
	.4byte BattleScript_EFFECT_SNORE @ EFFECT_SNORE
	.4byte BattleScript_EFFECT_CONVERSION_2 @ EFFECT_CONVERSION_2
	.4byte BattleScript_EFFECT_LOCK_ON @ EFFECT_LOCK_ON
	.4byte BattleScript_EFFECT_SKETCH @ EFFECT_SKETCH
	.4byte BattleScript_EFFECT_HIT @ EFFECT_UNUSED_60
	.4byte BattleScript_EFFECT_SLEEP_TALK @ EFFECT_SLEEP_TALK
	.4byte BattleScript_EFFECT_DESTINY_BOND @ EFFECT_DESTINY_BOND
	.4byte BattleScript_EFFECT_FLAIL @ EFFECT_FLAIL
	.4byte BattleScript_EFFECT_SPITE @ EFFECT_SPITE
	.4byte BattleScript_EFFECT_HIT @ EFFECT_FALSE_SWIPE
	.4byte BattleScript_EFFECT_HEAL_BELL @ EFFECT_HEAL_BELL
	.4byte BattleScript_EFFECT_HIT @ EFFECT_QUICK_ATTACK
	.4byte BattleScript_EFFECT_TRIPLE_KICK @ EFFECT_TRIPLE_KICK
	.4byte BattleScript_EFFECT_THIEF @ EFFECT_THIEF
	.4byte BattleScript_EFFECT_MEAN_LOOK @ EFFECT_MEAN_LOOK
	.4byte BattleScript_EFFECT_NIGHTMARE @ EFFECT_NIGHTMARE
	.4byte BattleScript_EFFECT_MINIMIZE @ EFFECT_MINIMIZE
	.4byte BattleScript_EFFECT_CURSE @ EFFECT_CURSE
	.4byte BattleScript_EFFECT_HIT @ EFFECT_UNUSED_6E
	.4byte BattleScript_EFFECT_PROTECT @ EFFECT_PROTECT
	.4byte BattleScript_EFFECT_SPIKES @ EFFECT_SPIKES
	.4byte BattleScript_EFFECT_FORESIGHT @ EFFECT_FORESIGHT
	.4byte BattleScript_EFFECT_PERISH_SONG @ EFFECT_PERISH_SONG
	.4byte BattleScript_EFFECT_SANDSTORM @ EFFECT_SANDSTORM
	.4byte BattleScript_EFFECT_PROTECT @ EFFECT_ENDURE
	.4byte BattleScript_EFFECT_ROLLOUT @ EFFECT_ROLLOUT
	.4byte BattleScript_EFFECT_SWAGGER @ EFFECT_SWAGGER
	.4byte BattleScript_EFFECT_FURY_CUTTER @ EFFECT_FURY_CUTTER
	.4byte BattleScript_EFFECT_ATTRACT @ EFFECT_ATTRACT
	.4byte BattleScript_EFFECT_RETURN @ EFFECT_RETURN
	.4byte BattleScript_EFFECT_PRESENT @ EFFECT_PRESENT
	.4byte BattleScript_EFFECT_RETURN @ EFFECT_FRUSTRATION
	.4byte BattleScript_EFFECT_SAFEGUARD @ EFFECT_SAFEGUARD
	.4byte BattleScript_EFFECT_THAW_HIT @ EFFECT_THAW_HIT
	.4byte BattleScript_EFFECT_MAGNITUDE @ EFFECT_MAGNITUDE
	.4byte BattleScript_EFFECT_BATON_PASS @ EFFECT_BATON_PASS
	.4byte BattleScript_EFFECT_HIT @ EFFECT_PURSUIT
	.4byte BattleScript_EFFECT_RAPID_SPIN @ EFFECT_RAPID_SPIN
	.4byte BattleScript_EFFECT_SONICBOOM @ EFFECT_SONICBOOM
	.4byte BattleScript_EFFECT_HIT @ EFFECT_UNUSED_83
	.4byte BattleScript_EFFECT_MORNING_SUN @ EFFECT_MORNING_SUN
	.4byte BattleScript_EFFECT_MORNING_SUN @ EFFECT_SYNTHESIS
	.4byte BattleScript_EFFECT_MORNING_SUN @ EFFECT_MOONLIGHT
	.4byte BattleScript_EFFECT_HIDDEN_POWER @ EFFECT_HIDDEN_POWER
	.4byte BattleScript_EFFECT_RAIN_DANCE @ EFFECT_RAIN_DANCE
	.4byte BattleScript_EFFECT_SUNNY_DAY @ EFFECT_SUNNY_DAY
	.4byte BattleScript_EFFECT_DEFENSE_UP_HIT @ EFFECT_DEFENSE_UP_HIT
	.4byte BattleScript_EFFECT_ATTACK_UP_HIT @ EFFECT_ATTACK_UP_HIT
	.4byte BattleScript_EFFECT_ALL_STATS_UP_HIT @ EFFECT_ALL_STATS_UP_HIT
	.4byte BattleScript_EFFECT_HIT @ EFFECT_UNUSED_8D
	.4byte BattleScript_EFFECT_BELLY_DRUM @ EFFECT_BELLY_DRUM
	.4byte BattleScript_EFFECT_PSYCH_UP @ EFFECT_PSYCH_UP
	.4byte BattleScript_EFFECT_MIRROR_COAT @ EFFECT_MIRROR_COAT
	.4byte BattleScript_EFFECT_SKULL_BASH @ EFFECT_SKULL_BASH
	.4byte BattleScript_EFFECT_TWISTER @ EFFECT_TWISTER
	.4byte BattleScript_EFFECT_EARTHQUAKE @ EFFECT_EARTHQUAKE
	.4byte BattleScript_EFFECT_FUTURE_SIGHT @ EFFECT_FUTURE_SIGHT
	.4byte BattleScript_EFFECT_GUST @ EFFECT_GUST
	.4byte BattleScript_EFFECT_FLINCH_MINIMIZE_HIT @ EFFECT_FLINCH_MINIMIZE_HIT
	.4byte BattleScript_EFFECT_SOLAR_BEAM @ EFFECT_SOLAR_BEAM
	.4byte BattleScript_EFFECT_THUNDER @ EFFECT_THUNDER
	.4byte BattleScript_EFFECT_TELEPORT @ EFFECT_TELEPORT
	.4byte BattleScript_EFFECT_BEAT_UP @ EFFECT_BEAT_UP
	.4byte BattleScript_EFFECT_SEMI_INVULNERABLE @ EFFECT_SEMI_INVULNERABLE
	.4byte BattleScript_EFFECT_DEFENSE_CURL @ EFFECT_DEFENSE_CURL
	.4byte BattleScript_EFFECT_SOFTBOILED @ EFFECT_SOFTBOILED
	.4byte BattleScript_EFFECT_FAKE_OUT @ EFFECT_FAKE_OUT
	.4byte BattleScript_EFFECT_UPROAR @ EFFECT_UPROAR
	.4byte BattleScript_EFFECT_STOCKPILE @ EFFECT_STOCKPILE
	.4byte BattleScript_EFFECT_SPIT_UP @ EFFECT_SPIT_UP
	.4byte BattleScript_EFFECT_SWALLOW @ EFFECT_SWALLOW
	.4byte BattleScript_EFFECT_HIT @ EFFECT_UNUSED_A3
	.4byte BattleScript_EFFECT_HAIL @ EFFECT_HAIL
	.4byte BattleScript_EFFECT_TORMENT @ EFFECT_TORMENT
	.4byte BattleScript_EFFECT_FLATTER @ EFFECT_FLATTER
	.4byte BattleScript_EFFECT_WILL_O_WISP @ EFFECT_WILL_O_WISP
	.4byte BattleScript_EFFECT_MEMENTO @ EFFECT_MEMENTO
	.4byte BattleScript_EFFECT_FACADE @ EFFECT_FACADE
	.4byte BattleScript_EFFECT_FOCUS_PUNCH @ EFFECT_FOCUS_PUNCH
	.4byte BattleScript_EFFECT_SMELLINGSALT @ EFFECT_SMELLINGSALT
	.4byte BattleScript_EFFECT_FOLLOW_ME @ EFFECT_FOLLOW_ME
	.4byte BattleScript_EFFECT_NATURE_POWER @ EFFECT_NATURE_POWER
	.4byte BattleScript_EFFECT_CHARGE @ EFFECT_CHARGE
	.4byte BattleScript_EFFECT_TAUNT @ EFFECT_TAUNT
	.4byte BattleScript_EFFECT_HELPING_HAND @ EFFECT_HELPING_HAND
	.4byte BattleScript_EFFECT_TRICK @ EFFECT_TRICK
	.4byte BattleScript_EFFECT_ROLE_PLAY @ EFFECT_ROLE_PLAY
	.4byte BattleScript_EFFECT_WISH @ EFFECT_WISH
	.4byte BattleScript_EFFECT_ASSIST @ EFFECT_ASSIST
	.4byte BattleScript_EFFECT_INGRAIN @ EFFECT_INGRAIN
	.4byte BattleScript_EFFECT_SUPERPOWER @ EFFECT_SUPERPOWER
	.4byte BattleScript_EFFECT_MAGIC_COAT @ EFFECT_MAGIC_COAT
	.4byte BattleScript_EFFECT_RECYCLE @ EFFECT_RECYCLE
	.4byte BattleScript_EFFECT_REVENGE @ EFFECT_REVENGE
	.4byte BattleScript_EFFECT_BRICK_BREAK @ EFFECT_BRICK_BREAK
	.4byte BattleScript_EFFECT_YAWN @ EFFECT_YAWN
	.4byte BattleScript_EFFECT_KNOCK_OFF @ EFFECT_KNOCK_OFF
	.4byte BattleScript_EFFECT_ENDEAVOR @ EFFECT_ENDEAVOR
	.4byte BattleScript_EFFECT_ERUPTION @ EFFECT_ERUPTION
	.4byte BattleScript_EFFECT_SKILL_SWAP @ EFFECT_SKILL_SWAP
	.4byte BattleScript_EFFECT_IMPRISON @ EFFECT_IMPRISON
	.4byte BattleScript_EFFECT_REFRESH @ EFFECT_REFRESH
	.4byte BattleScript_EFFECT_GRUDGE @ EFFECT_GRUDGE
	.4byte BattleScript_EFFECT_SNATCH @ EFFECT_SNATCH
	.4byte BattleScript_EFFECT_LOW_KICK @ EFFECT_LOW_KICK
	.4byte BattleScript_EFFECT_SECRET_POWER @ EFFECT_SECRET_POWER
	.4byte BattleScript_EFFECT_DOUBLE_EDGE @ EFFECT_DOUBLE_EDGE
	.4byte BattleScript_EFFECT_TEETER_DANCE @ EFFECT_TEETER_DANCE
	.4byte BattleScript_EFFECT_BURN_HIT @ EFFECT_BLAZE_KICK
	.4byte BattleScript_EFFECT_MUD_SPORT @ EFFECT_MUD_SPORT
	.4byte BattleScript_EFFECT_POISON_FANG @ EFFECT_POISON_FANG
	.4byte BattleScript_EFFECT_WEATHER_BALL @ EFFECT_WEATHER_BALL
	.4byte BattleScript_EFFECT_OVERHEAT @ EFFECT_OVERHEAT
	.4byte BattleScript_EFFECT_TICKLE @ EFFECT_TICKLE
	.4byte BattleScript_EFFECT_COSMIC_POWER @ EFFECT_COSMIC_POWER
	.4byte BattleScript_EFFECT_SKY_UPPERCUT @ EFFECT_SKY_UPPERCUT
	.4byte BattleScript_EFFECT_BULK_UP @ EFFECT_BULK_UP
	.4byte BattleScript_EFFECT_POISON_HIT @ EFFECT_POISON_TAIL
	.4byte BattleScript_EFFECT_MUD_SPORT @ EFFECT_WATER_SPORT
	.4byte BattleScript_EFFECT_CALM_MIND @ EFFECT_CALM_MIND
	.4byte BattleScript_EFFECT_DRAGON_DANCE @ EFFECT_DRAGON_DANCE
	.4byte BattleScript_EFFECT_CAMOUFLAGE @ EFFECT_CAMOUFLAGE

BattleScript_EFFECT_HIT: @ 0x08286F88
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x0039, 0x08286FAE
	bs_jumpifstatus3condition 0x00, 0x00040000, 0x01, 0x08286FAE
	bs_orword 0x02023F24, 0x00040000
	bs_setbyte 0x02024126, 0x02
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_seteffectwithchance
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x00, 0x00
	bs_end
	bs_orbyte 0x02023F20, 0x01
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0020
	bs_effectivenesssound
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SLEEP: @ 0x08286FF5
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000007, 0x08287038
	bs_jumpifcantmakeasleep 0x08287057
	bs_jumpifstatus 0x00, 0x000000FF, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x01
	bs_seteffectprimary
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x0025
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x0027
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printfromtable 0x085ABA02
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_POISON_HIT: @ 0x08287067
	bs_setbyte 0x02023FD9, 0x02
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_ABSORB: @ 0x08287072
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_negativedamage
	bs_orword 0x02023F24, 0x00000100
	bs_jumpifability 0x00, 0x40, 0x082870AE
	bs_setbyte 0x02023FDB, 0x00
	bs_goto 0x082870B6
	bs_manipulatedamage 0x00
	bs_setbyte 0x02023FDB, 0x01
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x082870CD
	bs_printfromtable 0x085ABA68
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_goto 0x08286FD6

BattleScript_EFFECT_BURN_HIT: @ 0x082870E0
	bs_setbyte 0x02023FD9, 0x03
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_FREEZE_HIT: @ 0x082870EB
	bs_setbyte 0x02023FD9, 0x04
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_PARALYZE_HIT: @ 0x082870F6
	bs_setbyte 0x02023FD9, 0x05
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_EXPLOSION: @ 0x08287101
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_faintifabilitynotdamp
	bs_setatkhptozero
	bs_waitstate
	bs_jumpifbyte 0x05, 0x02023F20, 0x01, 0x0828711C
	bs_call 0x08287172
	bs_goto 0x0828711E
	bs_attackanimation
	bs_waitanimation
	bs_movevaluescleanup
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_accuracycheck 0x08287157, 0x0000
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifnexttargetvalid 0x0828711E
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_end
	bs_effectivenesssound
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifnexttargetvalid 0x0828711E
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_end
	bs_bicbyte 0x02023F20, 0x01
	bs_attackanimation
	bs_waitanimation
	bs_orbyte 0x02023F20, 0x01
	bs_return

BattleScript_EFFECT_DREAM_EATER: @ 0x08287181
	bs_attackcanceler
	bs_jumpifstatus2 0x00, 0x01000000, 0x08287196
	bs_jumpifstatus 0x00, 0x00000007, 0x082871A0
	bs_attackstring
	bs_ppreduce
	bs_waitmessage 0x0040
	bs_goto 0x08287049
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_negativedamage
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x082871DE
	bs_printstring 0x003C
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_goto 0x08286FD6

BattleScript_EFFECT_MIRROR_MOVE: @ 0x082871EA
	bs_attackcanceler
	bs_attackstring
	bs_pause 0x0040
	bs_trymirrormove
	bs_ppreduce
	bs_orbyte 0x02023F20, 0x20
	bs_printstring 0x00E7
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_ATTACK_UP: @ 0x08287202
	bs_setbyte 0x02024132, 0x11
	bs_goto 0x08287229

BattleScript_EFFECT_DEFENSE_UP: @ 0x0828720D
	bs_setbyte 0x02024132, 0x12
	bs_goto 0x08287229

BattleScript_EFFECT_SPECIAL_ATTACK_UP: @ 0x08287218
	bs_setbyte 0x02024132, 0x14
	bs_goto 0x08287229

BattleScript_EFFECT_EVASION_UP: @ 0x08287223
	bs_setbyte 0x02024132, 0x17
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_statbuffchange 0x41, 0x08287257
	bs_jumpifbyte 0x01, 0x02023FDB, 0x02, 0x08287245
	bs_pause 0x0020
	bs_goto 0x0828724F
	bs_attackanimation
	bs_waitanimation
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x01, 0x01, 0x02024128
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_playanimation 0x02, 0x01, 0x02024128
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_return

BattleScript_EFFECT_ATTACK_DOWN: @ 0x0828726C
	bs_setbyte 0x02024132, 0x91
	bs_goto 0x0828729E

BattleScript_EFFECT_DEFENSE_DOWN: @ 0x08287277
	bs_setbyte 0x02024132, 0x92
	bs_goto 0x0828729E

BattleScript_EFFECT_SPEED_DOWN: @ 0x08287282
	bs_setbyte 0x02024132, 0x93
	bs_goto 0x0828729E

BattleScript_EFFECT_ACCURACY_DOWN: @ 0x0828728D
	bs_setbyte 0x02024132, 0x96
	bs_goto 0x0828729E

BattleScript_EFFECT_EVASION_DOWN: @ 0x08287298
	bs_setbyte 0x02024132, 0x97
	bs_attackcanceler
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A2
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_statbuffchange 0x01, 0x082872E8
	bs_jumpifbyte 0x03, 0x02023FDB, 0x02, 0x082872D6
	bs_jumpifbyte 0x00, 0x02023FDB, 0x03, 0x082872E8
	bs_pause 0x0020
	bs_goto 0x082872E0
	bs_attackanimation
	bs_waitanimation
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x00, 0x01, 0x02024128
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_playanimation 0x02, 0x01, 0x02024128
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_return

BattleScript_EFFECT_HAZE: @ 0x082872FD
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_normalisebuffs
	bs_printstring 0x00F9
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_BIDE: @ 0x0828730E
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_orword 0x02023F24, 0x08000000
	bs_setbide
	bs_goto 0x08286FD6

BattleScript_EFFECT_RAMPAGE: @ 0x08287322
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_jumpifstatus2 0x01, 0x00001000, 0x08287336
	bs_ppreduce
	bs_confuseifrepeatingattackends
	bs_goto 0x08286FB8

BattleScript_EFFECT_ROAR: @ 0x0828733C
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x15, 0x08289B41
	bs_jumpifstatus3condition 0x00, 0x00000400, 0x00, 0x08289691
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_accuracycheck 0x08286FE8, 0x0000
	bs_jumpifword 0x04, 0x02022C90, 0x00040000, 0x082884A4
	bs_forcerandomswitch 0x082884A4

BattleScript_EFFECT_MULTI_HIT: @ 0x08287372
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_setmultihitcounter 0x00
	bs_initmultihitstring
	bs_setbyte 0x0202412E, 0x00
	bs_jumpifhasnohp 0x01, 0x0828741B
	bs_jumpifhasnohp 0x00, 0x082873FC
	bs_jumpifhalfword 0x00, 0x02023E90, 0x00D6, 0x082873A7
	bs_jumpifstatus 0x01, 0x00000007, 0x082873FC
	bs_movevaluescleanup
	bs_copyarray 0x02023FD9, 0x0202412E, 0x01
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x082873F9
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_printstring 0x0130
	bs_waitmessage 0x0001
	bs_addbyte 0x02024124, 0x01
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifbyte 0x04, 0x02023F20, 0x40, 0x082873FC
	bs_decrementmultihit 0x08287385
	bs_goto 0x082873FC
	bs_pause 0x0020
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x0828741B
	bs_copyarray 0x02022C0C, 0x02024120, 0x06
	bs_printstring 0x0022
	bs_waitmessage 0x0040
	bs_seteffectwithchance
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x02
	bs_moveend 0x01, 0x00
	bs_setbyte 0x0202412C, 0x04
	bs_moveend 0x00, 0x00
	bs_end

BattleScript_EFFECT_CONVERSION: @ 0x08287436
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_tryconversiontypechange 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0049
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FLINCH_HIT: @ 0x0828744B
	bs_setbyte 0x02023FD9, 0x08
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_RESTORE_HP: @ 0x08287456
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_tryhealhalfhealth 0x08288483, 0x01
	bs_attackanimation
	bs_waitanimation
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x004B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_TOXIC: @ 0x08287479
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x11, 0x082874EB
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000008, 0x082874DA
	bs_jumpifstatus 0x00, 0x00000080, 0x082874DA
	bs_jumpifstatus 0x00, 0x000000FF, 0x082884A4
	bs_jumpiftype 0x00, 0x03, 0x082884B6
	bs_jumpiftype 0x00, 0x08, 0x082884B6
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x06
	bs_seteffectprimary
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0040
	bs_printstring 0x002B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_copyarray 0x02023EB2, 0x02023EB0, 0x01
	bs_setbyte 0x02023FDB, 0x00
	bs_call 0x08289B71
	bs_goto 0x08286FD6

BattleScript_EFFECT_PAY_DAY: @ 0x08287505
	bs_setbyte 0x02023FD9, 0x0B
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_LIGHT_SCREEN: @ 0x08287510
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setlightscreen
	bs_goto 0x08287814

BattleScript_EFFECT_TRI_ATTACK: @ 0x08287519
	bs_setbyte 0x02023FD9, 0x09
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_REST: @ 0x08287524
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus 0x01, 0x00000007, 0x0828755E
	bs_jumpifcantmakeasleep 0x0828754E
	bs_trysetrest 0x08288483
	bs_pause 0x0020
	bs_printfromtable 0x085AB9EE
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_waitstate
	bs_goto 0x08288469
	bs_pause 0x0040
	bs_printfromtable 0x085ABA02
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x0026
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_OHKO: @ 0x0828756F
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_typecalc
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x08286FBC
	bs_tryKO 0x08287590
	bs_trysetdestinybondtohappen
	bs_goto 0x08286FBC
	bs_pause 0x0040
	bs_printfromtable 0x085ABA60
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RAZOR_WIND: @ 0x082875A0
	bs_jumpifstatus2 0x01, 0x00001000, 0x082875C8
	bs_jumpifword 0x04, 0x02023F24, 0x00000200, 0x082875C8
	bs_setbyte 0x02024127, 0x00
	bs_call 0x082875F7
	bs_goto 0x08286FD6
	bs_attackcanceler
	bs_setbyte 0x02023FD9, 0x0C
	bs_setbyte 0x02024130, 0x01
	bs_clearstatusfromeffect 0x01
	bs_orword 0x02023F24, 0x00000800
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x008F, 0x08286FAF
	bs_setbyte 0x02023FD9, 0x08
	bs_goto 0x08286FAF
	bs_attackcanceler
	bs_printstring 0x0130
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_orword 0x02023F24, 0x08000000
	bs_setbyte 0x02023FD9, 0x4C
	bs_seteffectprimary
	bs_copyarray 0x02023FDB, 0x02024127, 0x01
	bs_printfromtable 0x085ABA1C
	bs_waitmessage 0x0040
	bs_return

BattleScript_EFFECT_SUPER_FANG: @ 0x08287621
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_damagetohalftargethp
	bs_goto 0x08286FBC

BattleScript_EFFECT_DRAGON_RAGE: @ 0x08287638
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_setbyte 0x02023E94, 0x28
	bs_setbyte 0x02023E95, 0x00
	bs_setbyte 0x02023E96, 0x00
	bs_setbyte 0x02023E97, 0x00
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_TRAP: @ 0x08287667
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x00FA, 0x0828768D
	bs_jumpifstatus3condition 0x00, 0x00040000, 0x01, 0x0828768D
	bs_orword 0x02023F24, 0x00040000
	bs_setbyte 0x02024126, 0x02
	bs_setbyte 0x02023FD9, 0x0D
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_DOUBLE_HIT: @ 0x08287698
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_setmultihitcounter 0x02
	bs_initmultihitstring
	bs_setbyte 0x0202412E, 0x00
	bs_goto 0x08287385

BattleScript_EFFECT_RECOIL_IF_MISS: @ 0x082876B0
	bs_attackcanceler
	bs_accuracycheck 0x082876BD, 0x0000
	bs_goto 0x08286FB6
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x04, 0x02023F20, 0x08, 0x08286FD6
	bs_printstring 0x0060
	bs_waitmessage 0x0040
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_manipulatedamage 0x01
	bs_bicbyte 0x02023F20, 0x01
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_orbyte 0x02023F20, 0x01
	bs_goto 0x08286FD6

BattleScript_EFFECT_MIST: @ 0x08287701
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setmist
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA38
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FOCUS_ENERGY: @ 0x08287714
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x01, 0x00100000, 0x082884A4
	bs_setfocusenergy
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA3C
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RECOIL: @ 0x08287731
	bs_setbyte 0x02023FD9, 0xCE
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x00A5, BattleScript_EFFECT_HIT
	bs_incrementgamestat 0x1B
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_CONFUSE: @ 0x0828774A
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x14, 0x08289B99
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus2 0x00, 0x00000007, 0x08287789
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x07
	bs_seteffectprimary
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x0044
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_ATTACK_UP_2: @ 0x0828779A
	bs_setbyte 0x02024132, 0x21
	bs_goto 0x08287229

BattleScript_EFFECT_DEFENSE_UP_2: @ 0x082877A5
	bs_setbyte 0x02024132, 0x22
	bs_goto 0x08287229

BattleScript_EFFECT_SPEED_UP_2: @ 0x082877B0
	bs_setbyte 0x02024132, 0x23
	bs_goto 0x08287229

BattleScript_EFFECT_SPECIAL_ATTACK_UP_2: @ 0x082877BB
	bs_setbyte 0x02024132, 0x24
	bs_goto 0x08287229

BattleScript_EFFECT_SPECIAL_DEFENSE_UP_2: @ 0x082877C6
	bs_setbyte 0x02024132, 0x25
	bs_goto 0x08287229

BattleScript_EFFECT_TRANSFORM: @ 0x082877D1
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_transformdataexecution
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA40
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_ATTACK_DOWN_2: @ 0x082877E4
	bs_setbyte 0x02024132, 0xA1
	bs_goto 0x0828729E

BattleScript_EFFECT_DEFENSE_DOWN_2: @ 0x082877EF
	bs_setbyte 0x02024132, 0xA2
	bs_goto 0x0828729E

BattleScript_EFFECT_SPEED_DOWN_2: @ 0x082877FA
	bs_setbyte 0x02024132, 0xA3
	bs_goto 0x0828729E

BattleScript_EFFECT_SPECIAL_DEFENSE_DOWN_2: @ 0x08287805
	bs_setbyte 0x02024132, 0xA5
	bs_goto 0x0828729E

BattleScript_EFFECT_REFLECT: @ 0x08287810
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setreflect
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085AB9D8
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_POISON: @ 0x08287823
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x11, 0x082874EB
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000008, 0x082874DA
	bs_jumpifstatus 0x00, 0x00000080, 0x082874DA
	bs_jumpiftype 0x00, 0x03, 0x082884B6
	bs_jumpiftype 0x00, 0x08, 0x082884B6
	bs_jumpifstatus 0x00, 0x000000FF, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x02
	bs_seteffectprimary
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_PARALYZE: @ 0x08287884
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x07, 0x082878EA
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_typecalc
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000040, 0x082878D9
	bs_jumpifstatus 0x00, 0x000000FF, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x05
	bs_seteffectprimary
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x003A
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_copyarray 0x02023EB2, 0x02023EB0, 0x01
	bs_setbyte 0x02023FDB, 0x00
	bs_call 0x08289B65
	bs_goto 0x08286FD6

BattleScript_EFFECT_ATTACK_DOWN_HIT: @ 0x08287904
	bs_setbyte 0x02023FD9, 0x16
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_DEFENSE_DOWN_HIT: @ 0x0828790F
	bs_setbyte 0x02023FD9, 0x17
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SPEED_DOWN_HIT: @ 0x0828791A
	bs_setbyte 0x02023FD9, 0x18
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SPECIAL_ATTACK_DOWN_HIT: @ 0x08287925
	bs_setbyte 0x02023FD9, 0x19
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SPECIAL_DEFENSE_DOWN_HIT: @ 0x08287930
	bs_setbyte 0x02023FD9, 0x1A
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_ACCURACY_DOWN_HIT: @ 0x0828793B
	bs_setbyte 0x02023FD9, 0x1B
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SKY_ATTACK: @ 0x08287946
	bs_jumpifstatus2 0x01, 0x00001000, 0x082875C8
	bs_jumpifword 0x04, 0x02023F24, 0x00000200, 0x082875C8
	bs_setbyte 0x02024127, 0x03
	bs_call 0x082875F7
	bs_goto 0x08286FD6

BattleScript_EFFECT_CONFUSE_HIT: @ 0x0828796E
	bs_setbyte 0x02023FD9, 0x07
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_TWINEEDLE: @ 0x08287979
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_setbyte 0x0202412E, 0x02
	bs_attackstring
	bs_ppreduce
	bs_setmultihitcounter 0x02
	bs_initmultihitstring
	bs_goto 0x08287385

BattleScript_EFFECT_SUBSTITUTE: @ 0x08287991
	bs_attackcanceler
	bs_ppreduce
	bs_attackstring
	bs_waitstate
	bs_jumpifstatus2 0x01, 0x01000000, 0x082879C6
	bs_setsubstitute
	bs_jumpifbyte 0x01, 0x02023FDB, 0x01, 0x082879B3
	bs_pause 0x0020
	bs_goto 0x082879B9
	bs_attackanimation
	bs_waitanimation
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printfromtable 0x085ABA44
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x007F
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RECHARGE: @ 0x082879D7
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_setbyte 0x02023FD9, 0xDD
	bs_goto 0x08286FB6
	bs_printstring 0x0082
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RAGE: @ 0x082879F5
	bs_attackcanceler
	bs_accuracycheck 0x08287A0F, 0x0000
	bs_setbyte 0x02023FD9, 0x1E
	bs_seteffectprimary
	bs_setbyte 0x02023FD9, 0x00
	bs_goto 0x08286FB6
	bs_setbyte 0x02023FD9, 0x1E
	bs_clearstatusfromeffect 0x01
	bs_goto 0x08286FE6

BattleScript_EFFECT_MIMIC: @ 0x08287A1C
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_mimicattackcopy 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0016
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_METRONOME: @ 0x08287A42
	bs_attackcanceler
	bs_attackstring
	bs_pause 0x0020
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024130, 0x00
	bs_setbyte 0x02024131, 0x00
	bs_metronome

BattleScript_EFFECT_LEECH_SEED: @ 0x08287A56
	bs_attackcanceler
	bs_attackstring
	bs_pause 0x0020
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_accuracycheck 0x08287A6D, 0x0000
	bs_setseeded
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085AB9E4
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SPLASH: @ 0x08287A7D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_incrementgamestat 0x1A
	bs_printstring 0x00E4
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_DISABLE: @ 0x08287A8F
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0x0000
	bs_disablelastusedattack 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0084
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_LEVEL_DAMAGE: @ 0x08287AAB
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_dmgtolevel
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_PSYWAVE: @ 0x08287AC3
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_psywavedamageeffect
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_COUNTER: @ 0x08287ADB
	bs_attackcanceler
	bs_counterdamagecalculator 0x082884A2
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc2
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_ENCORE: @ 0x08287AF1
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_trysetencore 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0087
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_PAIN_SPLIT: @ 0x08287B0D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_painsplitdmgcalc 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_copyarray 0x02023E94, 0x02024118, 0x04
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_printstring 0x00FC
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SNORE: @ 0x08287B44
	bs_attackcanceler
	bs_jumpifstatus 0x01, 0x00000007, 0x08287B56
	bs_attackstring
	bs_ppreduce
	bs_goto 0x082884A4
	bs_jumpifhalfword 0x00, 0x02023E90, 0x00D6, 0x08287B6A
	bs_printstring 0x006B
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x08286FE8, 0x0000
	bs_setbyte 0x02023FD9, 0x08
	bs_goto 0x08286FB8

BattleScript_EFFECT_CONVERSION_2: @ 0x08287B7E
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_settypetorandomresistance 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0049
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_LOCK_ON: @ 0x08287B93
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_setalwayshitflag
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0089
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SKETCH: @ 0x08287BB5
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_copymovepermanently 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x008A
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SLEEP_TALK: @ 0x08287BD4
	bs_attackcanceler
	bs_jumpifstatus 0x01, 0x00000007, 0x08287BE6
	bs_attackstring
	bs_ppreduce
	bs_goto 0x082884A4
	bs_printstring 0x006B
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_attackstring
	bs_ppreduce
	bs_orword 0x02023F24, 0x00000800
	bs_trychoosesleeptalkmove 0x08287C06
	bs_pause 0x0040
	bs_goto 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024130, 0x00
	bs_setbyte 0x02024131, 0x00
	bs_jumptocalledmove 0x01

BattleScript_EFFECT_DESTINY_BOND: @ 0x08287C16
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setdestinybond
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x008B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FLAIL: @ 0x08287C27
	bs_remaininghptopower
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SPITE: @ 0x08287C2D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0x0000
	bs_tryspiteppreduce 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x008D
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_HEAL_BELL: @ 0x08287C49
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_healpartystatus
	bs_waitstate
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA70
	bs_waitmessage 0x0040
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x00D7, 0x08287C86
	bs_jumpifbyte 0x05, 0x02023FDB, 0x01, 0x08287C75
	bs_printstring 0x0132
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x05, 0x02023FDB, 0x02, 0x08287C86
	bs_printstring 0x015E
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x04
	bs_waitstate
	bs_goto 0x08286FD6

BattleScript_EFFECT_TRIPLE_KICK: @ 0x08287C8E
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setbyte 0x0202412A, 0x00
	bs_setbyte 0x0202412B, 0x00
	bs_initmultihitstring
	bs_setmultihit 0x03
	bs_jumpifhasnohp 0x01, 0x08287D5F
	bs_jumpifhasnohp 0x00, 0x08287D21
	bs_jumpifhalfword 0x00, 0x02023E90, 0x00D6, 0x08287CC2
	bs_jumpifstatus 0x01, 0x00000007, 0x08287D21
	bs_accuracycheck 0x08287D21, 0x0000
	bs_movevaluescleanup
	bs_addbyte 0x0202412A, 0x0A
	bs_addbyte 0x02024124, 0x01
	bs_copyarray 0x020240A4, 0x0202412A, 0x02
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x08287D21
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_printstring 0x0130
	bs_waitmessage 0x0001
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifbyte 0x04, 0x02023F20, 0x40, 0x08287D35
	bs_decrementmultihit 0x08287CA0
	bs_goto 0x08287D35
	bs_pause 0x0020
	bs_jumpifbyte 0x00, 0x02024124, 0x00, 0x08287D35
	bs_bicbyte 0x02023F20, 0x01
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x00, 0x02024124, 0x00, 0x08287D5F
	bs_jumpifbyte 0x04, 0x02023F20, 0x08, 0x08287D5F
	bs_copyarray 0x02022C0C, 0x02024120, 0x06
	bs_printstring 0x0022
	bs_waitmessage 0x0040
	bs_seteffectwithchance
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x0E
	bs_moveend 0x00, 0x00
	bs_end

BattleScript_EFFECT_THIEF: @ 0x08287D71
	bs_setbyte 0x02023FD9, 0x1F
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_MEAN_LOOK: @ 0x08287D7C
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0xFFFE
	bs_jumpifstatus2 0x00, 0x04000000, 0x082884A4
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x20
	bs_seteffectprimary
	bs_printstring 0x008F
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_NIGHTMARE: @ 0x08287DAE
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus2 0x00, 0x08000000, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000007, 0x08287DD4
	bs_goto 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x21
	bs_seteffectprimary
	bs_printstring 0x0090
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_MINIMIZE: @ 0x08287DE8
	bs_attackcanceler
	bs_setminimize
	bs_setbyte 0x02024132, 0x17
	bs_goto 0x0828722A

BattleScript_EFFECT_CURSE: @ 0x08287DF5
	bs_jumpiftype2 0x01, 0x07, 0x08287E6D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x01, 0x02, 0x03, 0x00, 0x08287E1A
	bs_jumpifstat 0x01, 0x01, 0x01, 0x0C, 0x08287E1A
	bs_jumpifstat 0x01, 0x00, 0x02, 0x0C, 0x082884A4
	bs_copyarray 0x02023EB0, 0x02023EAF, 0x01
	bs_setbyte 0x02024130, 0x01
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024132, 0x93
	bs_statbuffchange 0x41, 0x08287E40
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x11
	bs_statbuffchange 0x41, 0x08287E54
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x08287E68
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_jumpifarraynotequal 0x02023EAF, 0x02023EB0, 0x01, 0x08287E7E
	bs_various 0x01, 0x03
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_cursetarget 0x082884A4
	bs_orword 0x02023F24, 0x00000100
	bs_setbyte 0x02024130, 0x00
	bs_attackanimation
	bs_waitanimation
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x0092
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_goto 0x08286FD6

BattleScript_EFFECT_PROTECT: @ 0x08287EBE
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setprotectlike
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085AB9D2
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SPIKES: @ 0x08287ED1
	bs_attackcanceler
	bs_trysetspikes 0x082884A2
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0094
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FORESIGHT: @ 0x08287EE6
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_setforesight
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0096
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_PERISH_SONG: @ 0x08287EFE
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trysetperishsong 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00FE
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412F, 0x00
	bs_jumpifability 0x0A, 0x2B, 0x08287F34
	bs_addbyte 0x0202412F, 0x01
	bs_jumpifarraynotequal 0x0202412F, 0x02023D10, 0x01, 0x08287F14
	bs_goto 0x08286FD6
	bs_printstring 0x015E
	bs_waitmessage 0x0040
	bs_goto 0x08287F1B

BattleScript_EFFECT_SANDSTORM: @ 0x08287F3F
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setsandstorm
	bs_goto 0x082880C9

BattleScript_EFFECT_ROLLOUT: @ 0x08287F48
	bs_attackcanceler
	bs_attackstring
	bs_jumpifstatus2 0x01, 0x00001000, 0x08287F55
	bs_ppreduce
	bs_accuracycheck 0x08287F5C, 0x0000
	bs_typecalc2
	bs_rolloutdamagecalculation
	bs_goto 0x08286FB8

BattleScript_EFFECT_SWAGGER: @ 0x08287F63
	bs_attackcanceler
	bs_jumpifstatus2 0x00, 0x01000000, 0x08286FE0
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_jumpifconfusedandstatmaxed 0x01, 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024132, 0x21
	bs_statbuffchange 0x01, 0x08287FA6
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08287FA6
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x00, 0x01, 0x02024128
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_jumpifability 0x00, 0x14, 0x08289B99
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_setbyte 0x02023FD9, 0x07
	bs_seteffectprimary
	bs_goto 0x08286FD6

BattleScript_EFFECT_FURY_CUTTER: @ 0x08287FC1
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x08287FCB, 0x0000
	bs_furycuttercalc
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x08287FCB
	bs_adjustnormaldamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_ATTRACT: @ 0x08287FE0
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0x0000
	bs_tryinfatuating 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0045
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RETURN: @ 0x08287FFC
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_happinesstodamagecalculation
	bs_goto 0x08286FB6

BattleScript_EFFECT_PRESENT: @ 0x0828800A
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_presentdamagecalculation

BattleScript_EFFECT_SAFEGUARD: @ 0x08288016
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setsafeguard
	bs_goto 0x08287814

BattleScript_EFFECT_THAW_HIT: @ 0x0828801F
	bs_setbyte 0x02023FD9, 0x03
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_MAGNITUDE: @ 0x0828802A
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_selectfirstvalidtarget
	bs_magnitudedamagecalculation
	bs_pause 0x0020
	bs_printstring 0x009A
	bs_waitmessage 0x0040
	bs_goto 0x082881CC

BattleScript_EFFECT_BATON_PASS: @ 0x0828803D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifword 0x04, 0x02022C90, 0x00040000, 0x082884A4
	bs_jumpifcantswitch 0x81, 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_openpartyscreen 0x01, 0x082884A4
	bs_switchoutabilities 0x01
	bs_waitstate
	bs_switchhandleorder 0x01, 0x02
	bs_returntoball 0x01
	bs_getswitchedmondata 0x01
	bs_switchindataupdate 0x01
	bs_hpthresholds 0x01
	bs_printstring 0x0003
	bs_switchinanim 0x01, 0x01
	bs_waitstate
	bs_switchineffects 0x01
	bs_goto 0x08286FD6

BattleScript_EFFECT_RAPID_SPIN: @ 0x08288078
	bs_setbyte 0x02023FD9, 0xE3
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SONICBOOM: @ 0x08288083
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_setbyte 0x02023E94, 0x14
	bs_setbyte 0x02023E95, 0x00
	bs_setbyte 0x02023E96, 0x00
	bs_setbyte 0x02023E97, 0x00
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_MORNING_SUN: @ 0x082880B2
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_recoverbasedonsunlight 0x08288483
	bs_goto 0x08288469

BattleScript_EFFECT_HIDDEN_POWER: @ 0x082880BF
	bs_hiddenpowercalc
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_RAIN_DANCE: @ 0x082880C5
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setrain
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085AB9B4
	bs_waitmessage 0x0040
	bs_call 0x08289A15
	bs_goto 0x08286FD6

BattleScript_EFFECT_SUNNY_DAY: @ 0x082880DD
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setsunny
	bs_goto 0x082880C9

BattleScript_EFFECT_DEFENSE_UP_HIT: @ 0x082880E6
	bs_setbyte 0x02023FD9, 0x50
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_ATTACK_UP_HIT: @ 0x082880F1
	bs_setbyte 0x02023FD9, 0x4F
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_ALL_STATS_UP_HIT: @ 0x082880FC
	bs_setbyte 0x02023FD9, 0x62
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_BELLY_DRUM: @ 0x08288107
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_maxattackhalvehp 0x082884A4
	bs_orword 0x02023F24, 0x00000100
	bs_attackanimation
	bs_waitanimation
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x009B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_PSYCH_UP: @ 0x08288129
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_copyfoestats 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x009C
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_MIRROR_COAT: @ 0x0828813E
	bs_attackcanceler
	bs_mirrorcoatdamagecalculator 0x082884A2
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_typecalc2
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_SKULL_BASH: @ 0x08288154
	bs_jumpifstatus2 0x01, 0x00001000, 0x082875C8
	bs_jumpifword 0x04, 0x02023F24, 0x00000200, 0x082875C8
	bs_setbyte 0x02024127, 0x02
	bs_call 0x082875F7
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x0828819E
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x0828819E
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x01, 0x01, 0x02024128
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_TWISTER: @ 0x082881A3
	bs_jumpifstatus3condition 0x00, 0x00000040, 0x01, 0x082881BD
	bs_orword 0x02023F24, 0x00010000
	bs_setbyte 0x02024126, 0x02
	bs_setbyte 0x02023FD9, 0x08
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_EARTHQUAKE: @ 0x082881C8
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_selectfirstvalidtarget
	bs_movevaluescleanup
	bs_jumpifstatus3condition 0x00, 0x00000080, 0x01, 0x082881EC
	bs_orword 0x02023F24, 0x00020000
	bs_setbyte 0x02024126, 0x02
	bs_goto 0x082881FB
	bs_bicword 0x02023F24, 0x00020000
	bs_setbyte 0x02024126, 0x01
	bs_accuracycheck 0x08288234, 0x0000
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_printstring 0x0130
	bs_waitmessage 0x0001
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifnexttargetvalid 0x082881CC
	bs_end
	bs_pause 0x0020
	bs_typecalc
	bs_effectivenesssound
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_jumpifnexttargetvalid 0x082881CC
	bs_end

BattleScript_EFFECT_FUTURE_SIGHT: @ 0x0828824C
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trysetfutureattack 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA7A
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_GUST: @ 0x08288263
	bs_jumpifstatus3condition 0x00, 0x00000040, 0x01, BattleScript_EFFECT_HIT
	bs_orword 0x02023F24, 0x00010000
	bs_setbyte 0x02024126, 0x02
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_FLINCH_MINIMIZE_HIT: @ 0x08288282
	bs_jumpifstatus3condition 0x00, 0x00000100, 0x01, 0x082881BD
	bs_setbyte 0x02024126, 0x02
	bs_goto 0x082881BD

BattleScript_EFFECT_SOLAR_BEAM: @ 0x08288298
	bs_jumpifabilitypresent 0x0D, 0x082882B0
	bs_jumpifabilitypresent 0x4D, 0x082882B0
	bs_jumpifhalfword 0x04, 0x02024070, 0x0060, 0x082882D8
	bs_jumpifstatus2 0x01, 0x00001000, 0x082875C8
	bs_jumpifword 0x04, 0x02023F24, 0x00000200, 0x082875C8
	bs_setbyte 0x02024127, 0x01
	bs_call 0x082875F7
	bs_goto 0x08286FD6
	bs_orword 0x02023F24, 0x08000000
	bs_setbyte 0x02023FD9, 0x4C
	bs_seteffectprimary
	bs_ppreduce
	bs_goto 0x082875C8

BattleScript_EFFECT_THUNDER: @ 0x082882EE
	bs_setbyte 0x02023FD9, 0x05
	bs_orword 0x02023F24, 0x00010000
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_TELEPORT: @ 0x08288302
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifword 0x04, 0x02022C90, 0x00000008, 0x082884A4
	bs_various 0x01, 0x02
	bs_jumpifbyte 0x00, 0x02023FD6, 0x01, 0x082884A4
	bs_jumpifbyte 0x00, 0x02023FD6, 0x02, 0x0828890A
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00A0
	bs_waitmessage 0x0040
	bs_various 0x01, 0x19
	bs_goto 0x08286FD6

BattleScript_EFFECT_BEAT_UP: @ 0x0828833C
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_pause 0x0020
	bs_ppreduce
	bs_setbyte 0x02023FD6, 0x00
	bs_movevaluescleanup
	bs_trydobeatup 0x08288392, 0x082884A4
	bs_printstring 0x00A3
	bs_critcalc
	bs_jumpifbyte 0x01, 0x02023EB5, 0x02, 0x0828836A
	bs_manipulatedamage 0x02
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_goto 0x0828834F
	bs_end

BattleScript_EFFECT_SEMI_INVULNERABLE: @ 0x08288393
	bs_jumpifstatus2 0x01, 0x00001000, 0x08288401
	bs_jumpifword 0x04, 0x02023F24, 0x00000200, 0x08288401
	bs_jumpifhalfword 0x00, 0x02023E8E, 0x0013, 0x082883F0
	bs_jumpifhalfword 0x00, 0x02023E8E, 0x0123, 0x082883E5
	bs_jumpifhalfword 0x00, 0x02023E8E, 0x0154, 0x082883DA
	bs_setbyte 0x02024127, 0x05
	bs_goto 0x082883F6
	bs_setbyte 0x02024127, 0x07
	bs_goto 0x082883F6
	bs_setbyte 0x02024127, 0x06
	bs_goto 0x082883F6
	bs_setbyte 0x02024127, 0x04
	bs_call 0x082875F7
	bs_setsemiinvulnerablebit
	bs_goto 0x08286FD6
	bs_attackcanceler
	bs_setbyte 0x02023FD9, 0x0C
	bs_setbyte 0x02024130, 0x01
	bs_clearstatusfromeffect 0x01
	bs_orword 0x02023F24, 0x00000800
	bs_jumpifhalfword 0x01, 0x02023E8E, 0x0154, 0x0828842B
	bs_setbyte 0x02023FD9, 0x05
	bs_accuracycheck 0x08288438, 0x0000
	bs_clearsemiinvulnerablebit
	bs_goto 0x08286FB6
	bs_clearsemiinvulnerablebit
	bs_goto 0x08286FE6

BattleScript_EFFECT_DEFENSE_CURL: @ 0x0828843E
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setdefensecurlbit
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x0828845B
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x0828724F
	bs_attackanimation
	bs_waitanimation
	bs_goto 0x08287247

BattleScript_EFFECT_SOFTBOILED: @ 0x08288460
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_tryhealhalfhealth 0x08288483, 0x00
	bs_attackanimation
	bs_waitanimation
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_printstring 0x004B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x004C
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FAKE_OUT: @ 0x08288491
	bs_attackcanceler
	bs_jumpifnotfirstturn 0x082884A2
	bs_setbyte 0x02023FD9, 0x88
	bs_goto BattleScript_EFFECT_HIT
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0020
	bs_orbyte 0x02023F20, 0x20
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_orbyte 0x02023F20, 0x08
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_UPROAR: @ 0x082884C8
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_setbyte 0x02023FD9, 0x4A
	bs_attackstring
	bs_jumpifstatus2 0x01, 0x00001000, 0x082884E2
	bs_ppreduce
	bs_nop
	bs_goto 0x08286FB8

BattleScript_EFFECT_STOCKPILE: @ 0x082884E8
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_stockpile
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085AB9F6
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SPIT_UP: @ 0x082884FB
	bs_attackcanceler
	bs_jumpifbyte 0x00, 0x02023FDC, 0x01, 0x0828852A
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_stockpiletobasedamage 0x0828851C
	bs_typecalc
	bs_adjustsetdamage
	bs_goto 0x08286FBC
	bs_pause 0x0020
	bs_printstring 0x00F6
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0040
	bs_stockpiletobasedamage 0x0828851C
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SWALLOW: @ 0x0828853D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_stockpiletohpheal 0x0828854A
	bs_goto 0x08288469
	bs_pause 0x0020
	bs_printfromtable 0x085AB9FE
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_HAIL: @ 0x0828855A
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_sethail
	bs_goto 0x082880C9

BattleScript_EFFECT_TORMENT: @ 0x08288563
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0x0000
	bs_settorment 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00A9
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_FLATTER: @ 0x0828857F
	bs_attackcanceler
	bs_jumpifstatus2 0x00, 0x01000000, 0x08286FE0
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_jumpifconfusedandstatmaxed 0x04, 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024132, 0x14
	bs_statbuffchange 0x01, 0x082885C2
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x082885C2
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x00, 0x01, 0x02024128
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_jumpifability 0x00, 0x14, 0x08289B99
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_setbyte 0x02023FD9, 0x07
	bs_seteffectprimary
	bs_goto 0x08286FD6

BattleScript_EFFECT_WILL_O_WISP: @ 0x082885DD
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifstatus 0x00, 0x00000010, 0x08288643
	bs_jumpiftype 0x00, 0x0A, 0x082884B6
	bs_jumpifability 0x00, 0x29, 0x08288629
	bs_jumpifstatus 0x00, 0x000000FF, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02023FD9, 0x03
	bs_seteffectprimary
	bs_goto 0x08286FD6
	bs_copyarray 0x02023EB2, 0x02023EB0, 0x01
	bs_setbyte 0x02023FDB, 0x00
	bs_call 0x08289B59
	bs_goto 0x08286FD6
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x015C
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_MEMENTO: @ 0x08288654
	bs_attackcanceler
	bs_jumpifbyte 0x00, 0x02023FDC, 0x01, 0x082886DB
	bs_attackstring
	bs_ppreduce
	bs_jumpifattackandspecialattackcannotfall 0x082884A4
	bs_setatkhptozero
	bs_attackanimation
	bs_waitanimation
	bs_jumpifstatus2 0x00, 0x01000000, 0x082886D0
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x00, 0x12, 0x07
	bs_playstatchangeanimation 0x00, 0x02, 0x03
	bs_setbyte 0x02024132, 0xA1
	bs_statbuffchange 0x01, 0x082886A1
	bs_jumpifbyte 0x02, 0x02023FDB, 0x01, 0x082886A1
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_playstatchangeanimation 0x00, 0x10, 0x03
	bs_setbyte 0x02024132, 0xA4
	bs_statbuffchange 0x01, 0x082886C4
	bs_jumpifbyte 0x02, 0x02023FDB, 0x01, 0x082886C4
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_goto 0x08286FD6
	bs_printstring 0x0169
	bs_waitmessage 0x0040
	bs_goto 0x082886C4
	bs_attackstring
	bs_ppreduce
	bs_jumpifattackandspecialattackcannotfall 0x082886E2
	bs_setatkhptozero
	bs_pause 0x0040
	bs_effectivenesssound
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_goto 0x08286FD6

BattleScript_EFFECT_FACADE: @ 0x082886F7
	bs_jumpifstatus 0x01, 0x000000D8, 0x08288706
	bs_goto BattleScript_EFFECT_HIT
	bs_setbyte 0x02024126, 0x02
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_FOCUS_PUNCH: @ 0x08288711
	bs_attackcanceler
	bs_jumpifnodamage 0x08286FAF
	bs_ppreduce
	bs_printstring 0x0150
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SMELLINGSALT: @ 0x08288723
	bs_jumpifstatus2 0x00, 0x01000000, BattleScript_EFFECT_HIT
	bs_setbyte 0x02023FD9, 0xA4
	bs_jumpifstatus 0x00, 0x00000040, 0x08288742
	bs_goto BattleScript_EFFECT_HIT
	bs_setbyte 0x02024126, 0x02
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_FOLLOW_ME: @ 0x0828874D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setforcedtarget
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00A4
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_NATURE_POWER: @ 0x0828875E
	bs_attackcanceler
	bs_attackstring
	bs_pause 0x0020
	bs_callterrainattack
	bs_printstring 0x00A6
	bs_waitmessage 0x0040
	bs_return

BattleScript_EFFECT_CHARGE: @ 0x0828876B
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setcharge
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00A5
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_TAUNT: @ 0x0828877C
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0x0000
	bs_settaunt 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00AC
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_HELPING_HAND: @ 0x08288798
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trysethelpinghand 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00AE
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_TRICK: @ 0x082887AD
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_accuracycheck 0x082884A4, 0x0000
	bs_tryswapitems 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00AF
	bs_waitmessage 0x0040
	bs_printfromtable 0x085ABADC
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_ROLE_PLAY: @ 0x082887DB
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_trycopyability 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00B0
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_WISH: @ 0x082887F7
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trywish 0x00, 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_goto 0x08286FD6

BattleScript_EFFECT_ASSIST: @ 0x08288807
	bs_attackcanceler
	bs_attackstring
	bs_assistattackselect 0x082884A3
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024130, 0x00
	bs_setbyte 0x02024131, 0x00
	bs_jumptocalledmove 0x01

BattleScript_EFFECT_INGRAIN: @ 0x0828881E
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trysetroots 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00B3
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SUPERPOWER: @ 0x08288833
	bs_setbyte 0x02023FD9, 0xE5
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_MAGIC_COAT: @ 0x0828883E
	bs_attackcanceler
	bs_trysetmagiccoat 0x082884A2
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00BD
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_RECYCLE: @ 0x08288853
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_tryrecycleitem 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0140
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_REVENGE: @ 0x08288868
	bs_doubledamagedealtifdamaged
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_BRICK_BREAK: @ 0x0828886E
	bs_attackcanceler
	bs_accuracycheck 0x08286FE6, 0x0000
	bs_attackstring
	bs_ppreduce
	bs_removelightscreenreflect
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_jumpifbyte 0x00, 0x02024130, 0x00, 0x0828888E
	bs_bicbyte 0x02023F20, 0x09
	bs_attackanimation
	bs_waitanimation
	bs_jumpifbyte 0x03, 0x02024130, 0x02, 0x082888A1
	bs_printstring 0x0162
	bs_waitmessage 0x0040
	bs_typecalc2
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_seteffectwithchance
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_goto 0x08286FD6

BattleScript_EFFECT_YAWN: @ 0x082888BF
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifability 0x00, 0x48, 0x08288900
	bs_jumpifability 0x00, 0x0F, 0x08288900
	bs_jumpifstatus2 0x00, 0x01000000, 0x082884A4
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08289289
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_jumpifcantmakeasleep 0x082884A4
	bs_setyawn 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00B6
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_copyarray 0x0202412F, 0x0202412D, 0x01
	bs_pause 0x0020
	bs_printstring 0x015A
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_KNOCK_OFF: @ 0x08288918
	bs_setbyte 0x02023FD9, 0x36
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_ENDEAVOR: @ 0x08288923
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setdamagetohealthdifference 0x082884A4
	bs_copyarray 0x02023E98, 0x02023E94, 0x04
	bs_accuracycheck 0x08286FE8, 0x0000
	bs_typecalc
	bs_jumpifbyte 0x04, 0x02023F20, 0x29, 0x08286FBC
	bs_bicbyte 0x02023F20, 0x06
	bs_copyarray 0x02023E94, 0x02023E98, 0x04
	bs_adjustsetdamage
	bs_goto 0x08286FBC

BattleScript_EFFECT_ERUPTION: @ 0x0828895E
	bs_scaledamagebyhealthratio
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_SKILL_SWAP: @ 0x08288964
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_accuracycheck 0x082884A4, 0xFFFF
	bs_tryswapabilities 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00B8
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_IMPRISON: @ 0x08288980
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_tryimprison 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00B9
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_REFRESH: @ 0x08288995
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_cureifburnedparalysedorpoisoned 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00A7
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_goto 0x08286FD6

BattleScript_EFFECT_GRUDGE: @ 0x082889AC
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_trysetgrudge 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x00BB
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SNATCH: @ 0x082889C1
	bs_attackcanceler
	bs_trysetsnatch 0x082884A2
	bs_attackstring
	bs_ppreduce
	bs_attackanimation
	bs_waitanimation
	bs_pause 0x0020
	bs_printstring 0x00BF
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_LOW_KICK: @ 0x082889D9
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_weightdamagecalculation
	bs_accuracycheck 0x08286FE8, 0x0000
	bs_goto 0x08286FB8

BattleScript_EFFECT_SECRET_POWER: @ 0x082889E9
	bs_getsecretpowereffect
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_DOUBLE_EDGE: @ 0x082889EF
	bs_setbyte 0x02023FD9, 0xE6
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_TEETER_DANCE: @ 0x082889FA
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_setbyte 0x02023EB0, 0x00
	bs_movevaluescleanup
	bs_setbyte 0x02023FD9, 0x07
	bs_jumpifarrayequal 0x02023EAF, 0x02023EB0, 0x01, 0x08288A58
	bs_jumpifability 0x00, 0x14, 0x08288A6D
	bs_jumpifstatus2 0x00, 0x01000000, 0x08288A89
	bs_jumpifstatus2 0x00, 0x00000007, 0x08288A97
	bs_jumpifhasnohp 0x00, 0x08288A58
	bs_accuracycheck 0x08288AA8, 0x0000
	bs_jumpifsideaffecting 0x00, 0x0020, 0x08288A7B
	bs_attackanimation
	bs_waitanimation
	bs_seteffectprimary
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_addbyte 0x02023EB0, 0x01
	bs_jumpifarraynotequal 0x02023EB0, 0x02023D10, 0x01, 0x08288A03
	bs_end
	bs_pause 0x0020
	bs_printstring 0x00CA
	bs_waitmessage 0x0040
	bs_goto 0x08288A4F
	bs_pause 0x0020
	bs_printstring 0x0050
	bs_waitmessage 0x0040
	bs_goto 0x08288A4F
	bs_pause 0x0020
	bs_printstring 0x00E5
	bs_waitmessage 0x0040
	bs_goto 0x08288A4F
	bs_various 0x01, 0x17
	bs_pause 0x0020
	bs_printstring 0x0044
	bs_waitmessage 0x0040
	bs_goto 0x08288A4F
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_goto 0x08288A4F

BattleScript_EFFECT_MUD_SPORT: @ 0x08288AB1
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_settypebasedhalvers 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printfromtable 0x085ABA6C
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_POISON_FANG: @ 0x08288AC8
	bs_setbyte 0x02023FD9, 0x06
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_WEATHER_BALL: @ 0x08288AD3
	bs_setweatherballtype
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_OVERHEAT: @ 0x08288AD9
	bs_setbyte 0x02023FD9, 0xFB
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_TICKLE: @ 0x08288AE4
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x00, 0x02, 0x01, 0x00, 0x08288AF9
	bs_jumpifstat 0x00, 0x00, 0x02, 0x00, 0x08288B57
	bs_accuracycheck 0x082884A4, 0x0000
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x00, 0x06, 0x05
	bs_playstatchangeanimation 0x00, 0x02, 0x01
	bs_setbyte 0x02024132, 0x91
	bs_statbuffchange 0x01, 0x08288B2F
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288B2F
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_playstatchangeanimation 0x00, 0x04, 0x01
	bs_setbyte 0x02024132, 0x92
	bs_statbuffchange 0x01, 0x08288B52
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288B52
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_orbyte 0x02023F20, 0x20
	bs_printstring 0x015D
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_COSMIC_POWER: @ 0x08288B6B
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x01, 0x03, 0x02, 0x0C, 0x08288B80
	bs_jumpifstat 0x01, 0x00, 0x05, 0x0C, 0x08288CA5
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x24, 0x00
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x08288BAB
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288BAB
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x15
	bs_statbuffchange 0x41, 0x08288BCA
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288BCA
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_SKY_UPPERCUT: @ 0x08288BCF
	bs_orword 0x02023F24, 0x00010000
	bs_goto BattleScript_EFFECT_HIT

BattleScript_EFFECT_BULK_UP: @ 0x08288BDD
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x01, 0x03, 0x01, 0x0C, 0x08288BF2
	bs_jumpifstat 0x01, 0x00, 0x02, 0x0C, 0x08288CA5
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x06, 0x00
	bs_setbyte 0x02024132, 0x11
	bs_statbuffchange 0x41, 0x08288C1D
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288C1D
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x08288C3C
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288C3C
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_CALM_MIND: @ 0x08288C41
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x01, 0x03, 0x04, 0x0C, 0x08288C56
	bs_jumpifstat 0x01, 0x00, 0x05, 0x0C, 0x08288CA5
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x30, 0x00
	bs_setbyte 0x02024132, 0x14
	bs_statbuffchange 0x41, 0x08288C81
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288C81
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x15
	bs_statbuffchange 0x41, 0x08288CA0
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288CA0
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_orbyte 0x02023F20, 0x20
	bs_printstring 0x0019
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_DRAGON_DANCE: @ 0x08288CB9
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_jumpifstat 0x01, 0x03, 0x01, 0x0C, 0x08288CCE
	bs_jumpifstat 0x01, 0x00, 0x03, 0x0C, 0x08288CA5
	bs_attackanimation
	bs_waitanimation
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x0A, 0x00
	bs_setbyte 0x02024132, 0x11
	bs_statbuffchange 0x41, 0x08288CF9
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288CF9
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x13
	bs_statbuffchange 0x41, 0x08288D18
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08288D18
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6

BattleScript_EFFECT_CAMOUFLAGE: @ 0x08288D1D
	bs_attackcanceler
	bs_attackstring
	bs_ppreduce
	bs_settypetoterrain 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_printstring 0x0049
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_playfaintcry 0x01
	bs_pause 0x0040
	bs_dofaintanimation 0x01
	bs_cleareffectsonfaint 0x01
	bs_printstring 0x001C
	bs_return
	bs_playfaintcry 0x00
	bs_pause 0x0040
	bs_dofaintanimation 0x00
	bs_cleareffectsonfaint 0x00
	bs_printstring 0x001D
	bs_return
	bs_setbyte 0x02024134, 0x00
	bs_getexp 0x00
	bs_end2
	bs_atk24 0x08288E7E
	bs_jumpifbyte 0x01, 0x02023FDE, 0x00, 0x08288E7D
	bs_jumpifword 0x04, 0x02022C90, 0x00000008, 0x08288D9E
	bs_jumpifword 0x05, 0x02023F24, 0x00400000, 0x08288D9E
	bs_printstring 0x0151
	bs_setbyte 0x02023FD6, 0x00
	bs_yesnobox
	bs_jumpifbyte 0x00, 0x02023FD7, 0x00, 0x08288D9E
	bs_jumpifplayerran 0x08288E7D
	bs_printstring 0x0112
	bs_openpartyscreen 0x03, 0x08288E7D
	bs_switchhandleorder 0x03, 0x02
	bs_jumpifword 0x05, 0x02022C90, 0x00000008, 0x08288E58
	bs_jumpifword 0x04, 0x02022C90, 0x00000002, 0x08288E58
	bs_jumpifword 0x04, 0x02022C90, 0x02000000, 0x08288E58
	bs_jumpifword 0x04, 0x02022C90, 0x003F0100, 0x08288E58
	bs_jumpifword 0x04, 0x02022C90, 0x00000001, 0x08288E58
	bs_jumpifword 0x04, 0x02023F24, 0x00400000, 0x08288E58
	bs_jumpifbyte 0x00, 0x02024135, 0x01, 0x08288E58
	bs_jumpifcantswitch 0x0B, 0x08288E58
	bs_printstring 0x011A
	bs_setbyte 0x02023FD6, 0x00
	bs_yesnobox
	bs_jumpifbyte 0x00, 0x02023FD7, 0x01, 0x08288E58
	bs_setatktoplayer0
	bs_openpartyscreen 0x81, 0x08288E58
	bs_switchhandleorder 0x01, 0x02
	bs_jumpifbyte 0x00, 0x02023FD6, 0x06, 0x08288E58
	bs_atknameinbuff1
	bs_various 0x01, 0x05
	bs_hpthresholds2 0x01
	bs_printstring 0x0002
	bs_switchoutabilities 0x01
	bs_waitstate
	bs_returnatktoball
	bs_waitstate
	bs_drawpartystatussummary 0x01
	bs_getswitchedmondata 0x01
	bs_switchindataupdate 0x01
	bs_hpthresholds 0x01
	bs_printstring 0x0003
	bs_hidepartystatussummary 0x01
	bs_switchinanim 0x01, 0x00
	bs_waitstate
	bs_switchineffects 0x01
	bs_resetsentmonsvalue
	bs_drawpartystatussummary 0x03
	bs_getswitchedmondata 0x03
	bs_switchindataupdate 0x03
	bs_hpthresholds 0x03
	bs_printstring 0x0003
	bs_hidepartystatussummary 0x03
	bs_switchinanim 0x03, 0x00
	bs_waitstate
	bs_various 0x01, 0x07
	bs_switchineffects 0x03
	bs_jumpifword 0x04, 0x02022C90, 0x00000001, 0x08288E7D
	bs_cancelallactions
	bs_end2
	bs_openpartyscreen 0x05, 0x08288E84
	bs_switchhandleorder 0x03, 0x00
	bs_openpartyscreen 0x06, 0x08288EB4
	bs_switchhandleorder 0x03, 0x00
	bs_switchhandleorder 0x03, 0x03
	bs_drawpartystatussummary 0x03
	bs_getswitchedmondata 0x03
	bs_switchindataupdate 0x03
	bs_hpthresholds 0x03
	bs_printstring 0x0003
	bs_hidepartystatussummary 0x03
	bs_switchinanim 0x03, 0x00
	bs_waitstate
	bs_switchineffects 0x05
	bs_jumpifarraynotequal 0x02023EB1, 0x02023D10, 0x01, 0x08288E90
	bs_end2
	bs_jumpifword 0x04, 0x02022C90, 0x00008000, 0x08288ECB
	bs_printstring 0x0141
	bs_goto 0x08288ECE
	bs_printstring 0x016B
	bs_trainerslidein 0x01
	bs_waitstate
	bs_printstring 0x000C
	bs_jumpifword 0x05, 0x02022C90, 0x00008000, 0x08288EEB
	bs_trainerslideout 0x01
	bs_waitstate
	bs_trainerslidein 0x03
	bs_waitstate
	bs_printstring 0x016C
	bs_getmoneyreward
	bs_printstring 0x001E
	bs_waitmessage 0x0040
	bs_givepaydaymoney
	bs_pickup
	bs_end2
	bs_jumpifword 0x04, 0x02022C90, 0x00010000, 0x08288F46
	bs_jumpifword 0x04, 0x02022C90, 0x003F0100, 0x08288F51
	bs_jumpifword 0x04, 0x02022C90, 0x04000000, 0x08288F51
	bs_jumpifword 0x04, 0x02022C90, 0x00000800, 0x08288F45
	bs_jumpifhalfword 0x00, 0x0203886A, 0x0400, 0x08288F45
	bs_printstring 0x001F
	bs_waitmessage 0x0040
	bs_printstring 0x0020
	bs_waitmessage 0x0040
	bs_end2
	bs_jumpifbyte 0x00, 0x02023FDE, 0x03, 0x08288F92
	bs_jumpifword 0x05, 0x02022C90, 0x00000008, 0x08288F39
	bs_various 0x01, 0x13
	bs_waitstate
	bs_various 0x01, 0x14
	bs_waitstate
	bs_trainerslidein 0x01
	bs_waitstate
	bs_printstring 0x017B
	bs_jumpifword 0x04, 0x02022C90, 0x00800000, 0x08288F89
	bs_jumpifword 0x05, 0x02022C90, 0x00008000, 0x08288F92
	bs_trainerslideout 0x01
	bs_waitstate
	bs_trainerslidein 0x03
	bs_waitstate
	bs_printstring 0x017C
	bs_end2
	bs_various 0x01, 0x13
	bs_waitstate
	bs_various 0x01, 0x14
	bs_waitstate
	bs_trainerslidein 0x01
	bs_waitstate
	bs_printstring 0x017B
	bs_trainerslideout 0x01
	bs_waitstate
	bs_trainerslidein 0x03
	bs_waitstate
	bs_printstring 0x017C
	bs_jumpifword 0x04, 0x02022C90, 0x01000000, 0x08288FB9
	bs_atk57
	bs_waitmessage 0x0040
	bs_end2
	bs_jumpifword 0x04, 0x02022C90, 0x00000100, 0x08288FE4
	bs_printstring 0x0005
	bs_waitmessage 0x0040
	bs_jumpifword 0x04, 0x02022C90, 0x01000000, 0x08288FE0
	bs_atk57
	bs_waitmessage 0x0040
	bs_end2
	bs_various 0x01, 0x1A
	bs_printstring 0x0005
	bs_waitmessage 0x0040
	bs_trainerslidein 0x01
	bs_waitstate
	bs_printstring 0x000C
	bs_trainerslideout 0x01
	bs_waitstate
	bs_trainerslidein 0x03
	bs_waitstate
	bs_printstring 0x016C
	bs_jumpifword 0x04, 0x02022C90, 0x01000000, 0x0828900B
	bs_atk57
	bs_waitmessage 0x0040
	bs_end2
	bs_jumpifword 0x05, 0x02022C90, 0x00000008, 0x08288EF2
	bs_jumpifword 0x04, 0x02022C90, 0x00008000, 0x08289033
	bs_printstring 0x0141
	bs_goto 0x08289036
	bs_printstring 0x016B
	bs_trainerslidein 0x01
	bs_waitstate
	bs_printstring 0x000C
	bs_jumpifword 0x05, 0x02022C90, 0x00008000, 0x08289053
	bs_trainerslideout 0x01
	bs_waitstate
	bs_trainerslidein 0x03
	bs_waitstate
	bs_printstring 0x016C
	bs_jumpifword 0x05, 0x02022C90, 0x00200000, 0x08289062
	bs_pickup
	bs_end2
	bs_playanimation 0x01, 0x08, 0x00000000
	bs_printstring 0x0152
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x0153
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x00DF
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x00E0
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x00E1
	bs_end2
	bs_printfromtable 0x085AB9AA
	bs_waitmessage 0x0040
	bs_end2
	bs_printselectionstringfromtable 0x085AB9AA
	bs_endselectionscript
	bs_printselectionstring 0x0158
	bs_endselectionscript
	bs_hpthresholds2 0x01
	bs_printstring 0x0002
	bs_setbyte 0x02024126, 0x02
	bs_jumpifword 0x04, 0x02022C90, 0x00000001, 0x082890BD
	bs_setmultihit 0x01
	bs_goto 0x082890BF
	bs_setmultihit 0x02
	bs_jumpifnopursuitswitchdmg 0x082890CC
	bs_swapattackerwithtarget
	bs_trysetdestinybondtohappen
	bs_call 0x082890FF
	bs_swapattackerwithtarget
	bs_decrementmultihit 0x082890BF
	bs_switchoutabilities 0x01
	bs_waitstate
	bs_returnatktoball
	bs_waitstate
	bs_drawpartystatussummary 0x01
	bs_switchhandleorder 0x01, 0x01
	bs_getswitchedmondata 0x01
	bs_switchindataupdate 0x01
	bs_hpthresholds 0x01
	bs_printstring 0x0003
	bs_hidepartystatussummary 0x01
	bs_switchinanim 0x01, 0x00
	bs_waitstate
	bs_switchineffects 0x01
	bs_setbyte 0x0202412C, 0x04
	bs_moveend 0x01, 0x00
	bs_setbyte 0x0202412C, 0x0F
	bs_moveend 0x01, 0x00
	bs_end2
	bs_pause 0x0020
	bs_attackstring
	bs_ppreduce
	bs_critcalc
	bs_damagecalc
	bs_typecalc
	bs_adjustnormaldamage
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_critmessage
	bs_waitmessage 0x0040
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_setbyte 0x0202412C, 0x03
	bs_moveend 0x02, 0x06
	bs_various 0x00, 0x04
	bs_jumpifbyte 0x00, 0x02023FD6, 0x00, 0x08289140
	bs_setbyte 0x02024134, 0x00
	bs_getexp 0x00
	bs_return
	bs_pause 0x0020
	bs_return
	bs_fanfare 0x016F
	bs_printstring 0x000E
	bs_setbyte 0x02024136, 0x00
	bs_drawlvlupbox
	bs_handlelearnnewmove 0x082891A1, 0x082891B3, 0x01
	bs_goto 0x0828916B
	bs_handlelearnnewmove 0x082891A1, 0x082891B3, 0x00
	bs_buffermovetolearn
	bs_printstring 0x0010
	bs_printstring 0x0011
	bs_printstring 0x0012
	bs_waitstate
	bs_setbyte 0x02024137, 0x00
	bs_yesnoboxlearnmove 0x08289198
	bs_printstring 0x0014
	bs_waitstate
	bs_setbyte 0x02024137, 0x00
	bs_yesnoboxstoplearningmove 0x0828916B
	bs_printstring 0x0015
	bs_goto 0x08289161
	bs_printstring 0x00DB
	bs_printstring 0x0013
	bs_printstring 0x00DC
	bs_buffermovetolearn
	bs_fanfare 0x016F
	bs_printstring 0x000F
	bs_waitmessage 0x0040
	bs_various 0x01, 0x06
	bs_goto 0x08289161
	bs_return
	bs_printfromtable 0x085AB9CC
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x082891CE
	bs_playanimation 0x01, 0x0A, 0x00000000
	bs_end2
	bs_printfromtable 0x085AB9C0
	bs_waitmessage 0x0040
	bs_playanimation2 0x01, 0x02024128, 0x00000000
	bs_setbyte 0x02023FD6, 0x00
	bs_copyarraywithindex 0x02023EAF, 0x02023D22, 0x02023FD6, 0x01
	bs_weatherdamage
	bs_jumpifword 0x00, 0x02023E94, 0x00000000, 0x08289228
	bs_printfromtable 0x085AB9C4
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x01100120
	bs_effectivenesssound
	bs_hitanimation 0x01
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_atk24 0x08289228
	bs_jumpifbyte 0x01, 0x02023FDE, 0x00, 0x08289247
	bs_addbyte 0x02023FD6, 0x01
	bs_jumpifarraynotequal 0x02023FD6, 0x02023D10, 0x01, 0x082891E7
	bs_bicword 0x02023F24, 0x01100120
	bs_end2
	bs_printfromtable 0x085AB9C8
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x00F1
	bs_waitmessage 0x0040
	bs_playanimation 0x01, 0x0B, 0x00000000
	bs_end2
	bs_printstring 0x00F2
	bs_waitmessage 0x0040
	bs_end2
	bs_printfromtable 0x085ABA86
	bs_waitmessage 0x0040
	bs_playanimation2 0x01, 0x02024128, 0x00000000
	bs_end3
	bs_printstring 0x015F
	bs_waitmessage 0x0040
	bs_end2
	bs_pause 0x0020
	bs_printstring 0x0050
	bs_waitmessage 0x0040
	bs_end2
	bs_pause 0x0020
	bs_printstring 0x0051
	bs_waitmessage 0x0040
	bs_end2
	bs_playanimation 0x01, 0x0E, 0x02024128
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_copyarray 0x02023E94, 0x02023E98, 0x04
	bs_jumpifability 0x01, 0x40, 0x082892CF
	bs_manipulatedamage 0x00
	bs_setbyte 0x02023FDB, 0x03
	bs_goto 0x082892D5
	bs_setbyte 0x02023FDB, 0x04
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_printfromtable 0x085AB9E4
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_end2
	bs_printstring 0x0078
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_attackcanceler
	bs_setbyte 0x02023FD9, 0x0C
	bs_clearstatusfromeffect 0x01
	bs_printstring 0x0079
	bs_waitmessage 0x0040
	bs_accuracycheck 0x08286FEB, 0x0000
	bs_typecalc
	bs_bicbyte 0x02023F20, 0x06
	bs_copyarray 0x02023E94, 0x0202411C, 0x04
	bs_adjustsetdamage
	bs_setbyte 0x02024130, 0x01
	bs_attackanimation
	bs_waitanimation
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_goto 0x08286FD6
	bs_attackcanceler
	bs_setbyte 0x02023FD9, 0x0C
	bs_clearstatusfromeffect 0x01
	bs_printstring 0x0079
	bs_waitmessage 0x0040
	bs_goto 0x082884A4
	bs_attackanimation
	bs_waitanimation
	bs_switchoutabilities 0x00
	bs_returntoball 0x00
	bs_waitstate
	bs_jumpifword 0x04, 0x02022C90, 0x00000008, 0x08289379
	bs_various 0x01, 0x19
	bs_finishaction
	bs_getswitchedmondata 0x00
	bs_switchindataupdate 0x00
	bs_switchinanim 0x00, 0x00
	bs_waitstate
	bs_printstring 0x0154
	bs_switchineffects 0x00
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x0062
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x0083
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x0085
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printselectionstring 0x0085
	bs_endselectionscript
	bs_printstring 0x0086
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x0085
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_end
	bs_printstring 0x0088
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x008C
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_return
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_call 0x08289486
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_tryfaintmon 0x01, 0x01, 0x08289402
	bs_return
	bs_setbyte 0x02024134, 0x00
	bs_getexp 0x01
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x00, 0x00
	bs_goto 0x08288D55
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_call 0x08289486
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_tryfaintmon 0x00, 0x01, 0x08289439
	bs_return
	bs_setbyte 0x02024134, 0x00
	bs_getexp 0x00
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x00, 0x00
	bs_goto 0x08288D55
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x03
	bs_datahpupdate 0x03
	bs_call 0x08289486
	bs_tryfaintmon 0x03, 0x00, 0x00000000
	bs_tryfaintmon 0x03, 0x01, 0x08289470
	bs_return
	bs_setbyte 0x02024134, 0x00
	bs_getexp 0x03
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x00, 0x00
	bs_goto 0x08288D55
	bs_printstring 0x0095
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x0097
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_end2
	bs_printstring 0x0097
	bs_waitmessage 0x0040
	bs_end2
	bs_jumpifstat 0x01, 0x03, 0x01, 0x0C, 0x082894DC
	bs_jumpifstat 0x01, 0x03, 0x02, 0x0C, 0x082894DC
	bs_jumpifstat 0x01, 0x03, 0x03, 0x0C, 0x082894DC
	bs_jumpifstat 0x01, 0x03, 0x04, 0x0C, 0x082894DC
	bs_jumpifstat 0x01, 0x00, 0x05, 0x0C, 0x0828954A
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x3E, 0x00
	bs_setbyte 0x02024132, 0x11
	bs_statbuffchange 0x41, 0x082894FA
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x12
	bs_statbuffchange 0x41, 0x0828950E
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x13
	bs_statbuffchange 0x41, 0x08289522
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x14
	bs_statbuffchange 0x41, 0x08289536
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_setbyte 0x02024132, 0x15
	bs_statbuffchange 0x41, 0x0828954A
	bs_printfromtable 0x085ABA08
	bs_waitmessage 0x0040
	bs_return
	bs_rapidspinfree
	bs_return
	bs_printstring 0x009D
	bs_waitmessage 0x0040
	bs_copyarray 0x02023EB0, 0x0202412F, 0x01
	bs_return
	bs_printstring 0x009E
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x009F
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x00A2
	bs_waitmessage 0x0040
	bs_jumpifbyte 0x01, 0x02023FDB, 0x00, 0x08289589
	bs_accuracycheck 0x082895E0, 0x00F8
	bs_goto 0x08289590
	bs_accuracycheck 0x082895E0, 0x0161
	bs_adjustnormaldamage2
	bs_jumpifbyte 0x01, 0x02023FDB, 0x00, 0x082895A8
	bs_playanimation 0x01, 0x12, 0x00000000
	bs_goto 0x082895AF
	bs_playanimation 0x01, 0x13, 0x00000000
	bs_effectivenesssound
	bs_hitanimation 0x00
	bs_waitstate
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x00, 0x00, 0x00000000
	bs_atk24 0x082895C7
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x01, 0x00
	bs_setbyte 0x0202412C, 0x0B
	bs_moveend 0x02, 0x0E
	bs_setbyte 0x02023F20, 0x00
	bs_end2
	bs_pause 0x0020
	bs_setbyte 0x02023F20, 0x00
	bs_orbyte 0x02023F20, 0x20
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_setbyte 0x02023F20, 0x00
	bs_end2
	bs_printselectionstring 0x00A8
	bs_endselectionscript
	bs_printselectionstring 0x00FF
	bs_endselectionscript
	bs_attackstring
	bs_pause 0x0020
	bs_printstring 0x0100
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printselectionstring 0x00AA
	bs_endselectionscript
	bs_printstring 0x00AA
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printstring 0x00AA
	bs_goto 0x082893B5
	bs_printselectionstring 0x00AD
	bs_endselectionscript
	bs_printstring 0x00AD
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printstring 0x00AD
	bs_goto 0x082893B5
	bs_trywish 0x01, 0x08289666
	bs_playanimation 0x00, 0x16, 0x00000000
	bs_printstring 0x00B2
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_printstring 0x004B
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x00B2
	bs_waitmessage 0x0040
	bs_pause 0x0020
	bs_printstring 0x004C
	bs_waitmessage 0x0040
	bs_end2
	bs_playanimation 0x01, 0x15, 0x00000000
	bs_printstring 0x00B4
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_end2
	bs_pause 0x0020
	bs_printstring 0x00B5
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x06, 0x0D
	bs_playstatchangeanimation 0x01, 0x02, 0x09
	bs_setbyte 0x02024132, 0x91
	bs_statbuffchange 0xC1, 0x082896CC
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x082896CC
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_playstatchangeanimation 0x01, 0x04, 0x09
	bs_setbyte 0x02024132, 0x92
	bs_statbuffchange 0xC1, 0x082896EF
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x082896EF
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_return
	bs_playanimation 0x00, 0x05, 0x00000000
	bs_printstring 0x00B7
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x00BA
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printselectionstring 0x00BA
	bs_endselectionscript
	bs_printstring 0x00BA
	bs_goto 0x082893B5
	bs_printstring 0x00BC
	bs_waitmessage 0x0040
	bs_return
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0020
	bs_printstring 0x00BE
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00800C00
	bs_various 0x01, 0x01
	bs_return
	bs_attackstring
	bs_ppreduce
	bs_snatchsetbattlers
	bs_playanimation 0x00, 0x11, 0x00000000
	bs_printstring 0x00C0
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00800C00
	bs_swapattackerwithtarget
	bs_return
	bs_printstring 0x0099
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x00DA
	bs_waitmessage 0x0040
	bs_return
	bs_setbyte 0x02024133, 0x00
	bs_playstatchangeanimation 0x01, 0x10, 0x0B
	bs_setbyte 0x02024132, 0xA4
	bs_statbuffchange 0xC1, 0x08289786
	bs_jumpifbyte 0x00, 0x02023FDB, 0x02, 0x08289786
	bs_printfromtable 0x085ABA14
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x0130
	bs_waitmessage 0x0001
	bs_playanimation 0x01, 0x14, 0x00000000
	bs_printstring 0x00AB
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x006B
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_goto 0x08286FD6
	bs_bicword 0x02023F24, 0x00000010
	bs_printfromtable 0x085AB9FA
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_return
	bs_printstring 0x006E
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_end2
	bs_printstring 0x002A
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_atk24 0x082897E6
	bs_end2
	bs_printstring 0x0030
	bs_waitmessage 0x0040
	bs_goto 0x082897CB
	bs_printstring 0x0033
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_goto 0x08286FD6
	bs_printfromtable 0x085ABA5C
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_return
	bs_printstring 0x0034
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x00
	bs_return
	bs_printstring 0x0039
	bs_waitmessage 0x0040
	bs_statusanimation 0x01
	bs_various 0x01, 0x00
	bs_goto 0x08286FD6
	bs_printstring 0x004A
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printfromtable 0x085AB9F2
	bs_waitmessage 0x0040
	bs_end2
	bs_chosenstatusanimation 0x01, 0x01, 0x00000007
	bs_printstring 0x007A
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x0041
	bs_waitmessage 0x0040
	bs_status2animation 0x01, 0x00000007
	bs_jumpifbyte 0x00, 0x02023FDB, 0x00, 0x08289887
	bs_various 0x01, 0x00
	bs_adjustnormaldamage2
	bs_printstring 0x00E6
	bs_waitmessage 0x0040
	bs_effectivenesssound
	bs_hitanimation 0x01
	bs_waitstate
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_resultmessage
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_goto 0x08286FD6
	bs_return
	bs_printstring 0x0042
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x007B
	bs_waitmessage 0x0040
	bs_return
	bs_playanimation 0x01, 0x06, 0x02024128
	bs_printstring 0x005E
	bs_waitmessage 0x0040
	bs_goto 0x082897CD
	bs_printstring 0x005F
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x0046
	bs_waitmessage 0x0040
	bs_status2animation 0x01, 0x000F0000
	bs_return
	bs_printstring 0x0047
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printstring 0x0091
	bs_waitmessage 0x0040
	bs_status2animation 0x01, 0x08000000
	bs_goto 0x082897CD
	bs_printstring 0x0093
	bs_waitmessage 0x0040
	bs_status2animation 0x01, 0x10000000
	bs_goto 0x082897CD
	bs_printstring 0x003B
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x00
	bs_return
	bs_statusanimation 0x02
	bs_printfromtable 0x085ABA50
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x02
	bs_waitstate
	bs_return
	bs_statusanimation 0x02
	bs_printstring 0x0023
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x02
	bs_waitstate
	bs_makevisible 0x02
	bs_end2
	bs_statusanimation 0x02
	bs_printfromtable 0x085ABA48
	bs_waitmessage 0x0040
	bs_goto 0x082898FC
	bs_statusanimation 0x02
	bs_printfromtable 0x085ABA54
	bs_waitmessage 0x0040
	bs_goto 0x082898FC
	bs_statusanimation 0x02
	bs_printfromtable 0x085ABA58
	bs_waitmessage 0x0040
	bs_goto 0x082898FC
	bs_statusanimation 0x02
	bs_printfromtable 0x085ABA4C
	bs_waitmessage 0x0040
	bs_goto 0x082898FC
	bs_printstring 0x006F
	bs_waitmessage 0x0040
	bs_return
	bs_statusanimation 0x02
	bs_printstring 0x002C
	bs_waitmessage 0x0040
	bs_goto 0x082898FC
	bs_printstring 0x00FA
	bs_waitmessage 0x0040
	bs_return
	bs_printfromtable 0x085ABA2C
	bs_waitmessage 0x0040
	bs_return
	bs_chosenstatusanimation 0x02, 0x01, 0x00000007
	bs_printstring 0x0043
	bs_waitmessage 0x0040
	bs_return
	bs_jumpifhalfword 0x00, 0x02023E8E, 0x00A5, 0x0828998F
	bs_jumpifability 0x01, 0x45, 0x082899A9
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x0064
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_return
	bs_playanimation 0x00, 0x10, 0x00000000
	bs_printstring 0x008E
	bs_waitmessage 0x0040
	bs_return
	bs_pause 0x0020
	bs_printstring 0x00C1
	bs_waitstate
	bs_playanimation 0x07, 0x0A, 0x00000000
	bs_call 0x08289A15
	bs_end3
	bs_playanimation 0x01, 0x01, 0x02024128
	bs_printstring 0x00C2
	bs_waitmessage 0x0040
	bs_end3
	bs_pause 0x0020
	bs_printstring 0x00D0
	bs_waitmessage 0x0040
	bs_end3
	bs_printstring 0x0133
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_end3
	bs_pause 0x0020
	bs_printstring 0x0134
	bs_waitstate
	bs_playanimation 0x07, 0x0C, 0x00000000
	bs_call 0x08289A15
	bs_end3
	bs_printstring 0x0138
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x01
	bs_end3
	bs_setbyte 0x0202412F, 0x00
	bs_trycastformdatachange
	bs_addbyte 0x0202412F, 0x01
	bs_jumpifarraynotequal 0x0202412F, 0x02023D10, 0x01, 0x08289A1B
	bs_return
	bs_call 0x08289A37
	bs_end3
	bs_docastformchangeanimation
	bs_waitstate
	bs_printstring 0x013A
	bs_waitmessage 0x0040
	bs_return
	bs_call 0x08289A46
	bs_end3
	bs_pause 0x0020
	bs_setbyte 0x02023EB0, 0x00
	bs_setbyte 0x02024132, 0x91
	bs_trygetintimidatetarget 0x08289AA3
	bs_jumpifstatus2 0x00, 0x01000000, 0x08289A98
	bs_jumpifability 0x00, 0x1D, 0x08289AA4
	bs_jumpifability 0x00, 0x34, 0x08289AA4
	bs_jumpifability 0x00, 0x49, 0x08289AA4
	bs_statbuffchange 0x21, 0x08289A98
	bs_jumpifbyte 0x02, 0x02023FDB, 0x01, 0x08289A98
	bs_setgraphicalstatchangevalues
	bs_playanimation 0x00, 0x01, 0x02024128
	bs_printstring 0x00CD
	bs_waitmessage 0x0040
	bs_addbyte 0x02023EB0, 0x01
	bs_goto 0x08289A55
	bs_return
	bs_pause 0x0020
	bs_printstring 0x0155
	bs_waitmessage 0x0040
	bs_goto 0x08289A98
	bs_pause 0x0020
	bs_printstring 0x014B
	bs_waitstate
	bs_playanimation 0x07, 0x0B, 0x00000000
	bs_call 0x08289A15
	bs_end3
	bs_attackstring
	bs_pause 0x0020
	bs_printstring 0x014E
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000400
	bs_return
	bs_pause 0x0020
	bs_printstring 0x00C3
	bs_pause 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x00C4
	bs_pause 0x0040
	bs_goto 0x08286FD6
	bs_ppreduce
	bs_attackstring
	bs_pause 0x0020
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x00
	bs_datahpupdate 0x00
	bs_printstring 0x00C5
	bs_waitmessage 0x0040
	bs_orbyte 0x02023F20, 0x08
	bs_goto 0x08286FD6
	bs_ppreduce
	bs_attackstring
	bs_pause 0x0020
	bs_printstring 0x0147
	bs_waitmessage 0x0040
	bs_orbyte 0x02023F20, 0x08
	bs_goto 0x08286FD6
	bs_ppreduce
	bs_attackstring
	bs_pause 0x0020
	bs_printfromtable 0x085ABAE2
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x00CC
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x00CE
	bs_waitmessage 0x0040
	bs_return
	bs_pause 0x0020
	bs_printfromtable 0x085ABACA
	bs_waitmessage 0x0040
	bs_return
	bs_pause 0x0020
	bs_printfromtable 0x085ABAD0
	bs_waitmessage 0x0040
	bs_return
	bs_pause 0x0020
	bs_printfromtable 0x085ABAD6
	bs_waitmessage 0x0040
	bs_return
	bs_pause 0x0020
	bs_printstring 0x00C8
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x015B
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x00CA
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_attackstring
	bs_ppreduce
	bs_pause 0x0020
	bs_printstring 0x0132
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_pause 0x0020
	bs_printstring 0x0135
	bs_waitmessage 0x0040
	bs_setbyte 0x02023FDB, 0x03
	bs_return
	bs_pause 0x0020
	bs_printstring 0x0137
	bs_waitmessage 0x0040
	bs_goto 0x08286FD6
	bs_printstring 0x00C6
	bs_waitmessage 0x0040
	bs_return
	bs_orword 0x02023F24, 0x00100100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x00CF
	bs_waitmessage 0x0040
	bs_tryfaintmon 0x01, 0x00, 0x00000000
	bs_return
	bs_status2animation 0x01, 0x000F0000
	bs_printstring 0x0136
	bs_waitmessage 0x0040
	bs_return
	bs_waitstate
	bs_seteffectsecondary
	bs_return
	bs_waitstate
	bs_seteffectprimary
	bs_return
	bs_pause 0x0020
	bs_printstring 0x0137
	bs_waitmessage 0x0040
	bs_return
	bs_printstring 0x0164
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_return
	bs_printstring 0x0113
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_end
	bs_printstring 0x0114
	bs_waitmessage 0x0040
	bs_jumptocalledmove 0x00
	bs_jumpifbyte 0x01, 0x02023FDB, 0x04, 0x08289C4F
	bs_setbyte 0x02023FD6, 0x00
	bs_various 0x01, 0x18
	bs_setbyte 0x02023FDB, 0x04
	bs_printfromtable 0x085ABAA6
	bs_waitmessage 0x0040
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_end
	bs_printstring 0x0115
	bs_waitmessage 0x0040
	bs_setbyte 0x02023FD9, 0x41
	bs_seteffectprimary
	bs_setbyte 0x0202412C, 0x00
	bs_moveend 0x02, 0x10
	bs_end
	bs_printstring 0x0117
	bs_waitmessage 0x0040
	bs_goto 0x0828985C
	bs_playanimation 0x00, 0x02, 0x00000000
	bs_printstring 0x0081
	bs_return
	bs_call 0x08289C94
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0123
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289CAC
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0124
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289CC4
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0125
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289CDC
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0126
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289CF4
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0127
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289D0C
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x0128
	bs_waitmessage 0x0040
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289D22
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printfromtable 0x085ABAC6
	bs_waitmessage 0x0040
	bs_updatestatusicon 0x0A
	bs_removeitem 0x0A
	bs_return
	bs_call 0x08289D3C
	bs_end2
	bs_playanimation 0x0A, 0x07, 0x00000000
	bs_printstring 0x012C
	bs_waitmessage 0x0040
	bs_removeitem 0x0A
	bs_return
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_printstring 0x012A
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_removeitem 0x01
	bs_end2
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_printstring 0x012B
	bs_waitmessage 0x0040
	bs_removeitem 0x01
	bs_end2
	bs_call 0x08289D7F
	bs_end2
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_printstring 0x012D
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_return
	bs_printselectionstring 0x012E
	bs_endselectionscript
	bs_playanimation 0x00, 0x09, 0x00000000
	bs_printstring 0x012F
	bs_waitmessage 0x0040
	bs_return
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_printstring 0x012A
	bs_waitmessage 0x0040
	bs_orword 0x02023F24, 0x00000100
	bs_healthbarupdate 0x01
	bs_datahpupdate 0x01
	bs_printstring 0x0144
	bs_waitmessage 0x0040
	bs_setbyte 0x02023FD9, 0x47
	bs_seteffectprimary
	bs_removeitem 0x01
	bs_end2
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_statbuffchange 0x41, 0x08289DE3
	bs_setbyte 0x02023FDB, 0x04
	bs_call 0x0828725C
	bs_removeitem 0x01
	bs_end2
	bs_playanimation 0x01, 0x07, 0x00000000
	bs_printstring 0x0146
	bs_waitmessage 0x0040
	bs_removeitem 0x01
	bs_end2
	bs_printselectionstring 0x0143
	bs_endselectionscript
	bs_printstring 0x0130
	bs_return
	bs_setbyte 0x02023FD7, 0x00
	bs_various 0x01, 0x08
	bs_jumpifbyte 0x01, 0x02023FD6, 0x01, 0x08289E25
	bs_printfromtable 0x085ABEB4
	bs_waitmessage 0x0040
	bs_addbyte 0x02023FD7, 0x01
	bs_jumpifarraynotequal 0x02023FD7, 0x02023D10, 0x01, 0x08289E0F
	bs_setbyte 0x02023FD6, 0x00
	bs_setbyte 0x02023FD7, 0x00
	bs_end2
	bs_various 0x01, 0x12
	bs_various 0x01, 0x15
	bs_playse 0x0109
	bs_pause 0x0008
	bs_playse 0x0109
	bs_various 0x01, 0x0E
	bs_various 0x08, 0x10
	bs_various 0x08, 0x11
	bs_pause 0x0040
	bs_various 0x01, 0x0F
	bs_various 0x01, 0x16
	bs_end2
	bs_playse 0x0049
	bs_various 0x01, 0x0E
	bs_various 0x00, 0x10
	bs_various 0x00, 0x11
	bs_pause 0x0040
	bs_various 0x01, 0x0F
	bs_end2
	bs_makevisible 0x0B
	bs_waitstate
	bs_makevisible 0x0C
	bs_waitstate
	bs_various 0x01, 0x15
	bs_playse 0x0109
	bs_pause 0x0008
	bs_playse 0x0109
	bs_pause 0x0040
	bs_various 0x01, 0x0E
	bs_various 0x01, 0x10
	bs_various 0x01, 0x11
	bs_pause 0x0040
	bs_setbyte 0x02023FD6, 0x00
	bs_various 0x01, 0x09
	bs_pause 0x0040
	bs_various 0x01, 0x09
	bs_various 0x02, 0x10
	bs_various 0x02, 0x11
	bs_various 0x01, 0x09
	bs_various 0x03, 0x10
	bs_various 0x03, 0x11
	bs_various 0x01, 0x09
	bs_various 0x04, 0x10
	bs_various 0x04, 0x11
	bs_various 0x01, 0x09
	bs_jumpifbyte 0x00, 0x02023FD7, 0x03, 0x08289EFB
	bs_jumpifbyte 0x00, 0x02023FD7, 0x04, 0x08289F1A
	bs_various 0x05, 0x10
	bs_various 0x05, 0x11
	bs_various 0x01, 0x09
	bs_various 0x01, 0x0F
	bs_printstring 0x0172
	bs_waitmessage 0x0040
	bs_playfaintcry 0x0C
	bs_various 0x01, 0x12
	bs_dofaintanimation 0x0C
	bs_cleareffectsonfaint 0x0C
	bs_various 0x01, 0x0A
	bs_end2
	bs_various 0x06, 0x10
	bs_various 0x06, 0x11
	bs_various 0x01, 0x09
	bs_various 0x01, 0x0F
	bs_printstring 0x0173
	bs_waitmessage 0x0040
	bs_playfaintcry 0x0B
	bs_various 0x01, 0x12
	bs_dofaintanimation 0x0B
	bs_cleareffectsonfaint 0x0B
	bs_various 0x01, 0x0B
	bs_end2
	bs_various 0x07, 0x10
	bs_various 0x07, 0x11
	bs_various 0x01, 0x09
	bs_various 0x01, 0x0F
	bs_printstring 0x0174
	bs_waitmessage 0x0040
	bs_playfaintcry 0x0B
	bs_various 0x01, 0x12
	bs_dofaintanimation 0x0B
	bs_cleareffectsonfaint 0x0B
	bs_playfaintcry 0x0C
	bs_various 0x01, 0x12
	bs_dofaintanimation 0x0C
	bs_cleareffectsonfaint 0x0C
	bs_various 0x01, 0x0C
	bs_end2
	bs_printselectionstring 0x0175
	bs_various 0x01, 0x0D
	bs_endselectionscript
	bs_printstring 0x0176
	bs_waitmessage 0x0040
	bs_end2
	bs_printstring 0x0176
	bs_waitmessage 0x0040
	bs_atk57
	bs_waitmessage 0x0040
	bs_end2

	.byte 0x00 @ alignment padding at 0x08289F5B
