// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/m92.cpp"

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /****
 Hook
*******/

ROM_START( hooks01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po01.3h", 0x000001, 0x040000, CRC(13fa1eca) SHA1(2a2a4d80a160535f667d6b425b532547018b0d22) )
	ROM_LOAD16_BYTE( "h-l0-d_po01.3h", 0x000000, 0x040000, CRC(f3efc301) SHA1(5664bf03054d7c23e90bffdc04d8ad55c1361ebf) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0-a.3l", 0x00001, 0x10000, CRC(bd3d1f61) SHA1(0c884a0b5519f9c0823128872baf7b0c4078e5c4) )
	ROM_LOAD16_BYTE( "h-sl0-a.3n", 0x00000, 0x10000, CRC(76371def) SHA1(b7a86fd4eecdd8a538c32e08cd920c27bd50924b) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po02.3h", 0x000001, 0x040000, CRC(298e5667) SHA1(f01a3744d20a9f9b48918648cefb740e6d223810) )
	ROM_LOAD16_BYTE( "h-l0-d_po02.3h", 0x000000, 0x040000, CRC(e234718d) SHA1(f2adc3bd813ef65a38dec0e0e6a25afc7f60aba7) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks03 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po03.3h", 0x000001, 0x040000, CRC(b912ebf4) SHA1(66f785e9691fae877098709c550cac5ed4fb0bf9) )
	ROM_LOAD16_BYTE( "h-l0-d_po03.3h", 0x000000, 0x040000, CRC(6a5eee0c) SHA1(e5639a6b9c8773bf23fb21860d08fd788907cac4) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks04 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po04.3h", 0x000001, 0x040000, CRC(637f7d17) SHA1(1f55be79503d1734c5d28621646ae031679565bb) )
	ROM_LOAD16_BYTE( "h-l0-d_po04.3h", 0x000000, 0x040000, CRC(180e4bbb) SHA1(67c7c98a95ca0ee738b2ad2510d2da510df67b40) )
	ROM_LOAD16_BYTE( "h-h1_po04.rom",  0x080001, 0x040000, CRC(9573d8b3) SHA1(c61063ab9e5a8cb8d2f4b8715325e7f1805bb960) )
	ROM_LOAD16_BYTE( "h-l1_po04.rom",  0x080000, 0x040000, CRC(eb5cd51c) SHA1(87773c0d8924d2bf00034ba8f8435d311be3c70d) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks05 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po05.3h", 0x000001, 0x040000, CRC(59db1de9) SHA1(672f674f61071dde79ae073c308bcffc79a9ee3d) )
	ROM_LOAD16_BYTE( "h-l0-d_po05.3h", 0x000000, 0x040000, CRC(6ccb3150) SHA1(0277ef8dabe44618e3f155de99eb058b4b9a5736) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookus01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-c_pw01.3h", 0x000001, 0x040000, CRC(23e76b50) SHA1(899b7ab7fe070899971f2f0c71c45212a840a021) )
	ROM_LOAD16_BYTE( "h-l0-c_pw01.5h", 0x000000, 0x040000, CRC(caae5586) SHA1(5c3be06df19c5b3a5ef8f758edf3672485fc815a) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookus02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-c_pw02.3h", 0x000001, 0x040000, CRC(9d0fa181) SHA1(f297607a28c93d823856d2518c5a8ec04dd9aea1) )
	ROM_LOAD16_BYTE( "h-l0-c_pw02.5h", 0x000000, 0x040000, CRC(3d7cd33e) SHA1(faf9fbf95811d0ce4ad770f038df8a3e32f39fcf) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookus03 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-c_pw03.3h", 0x000001, 0x040000, CRC(c3fc1cd4) SHA1(99c34bebb63e9953a422288366074c9c55fe710c) )
	ROM_LOAD16_BYTE( "h-l0-c_pw03.5h", 0x000000, 0x040000, CRC(afb39bbc) SHA1(e1228e21eac6ec765f664ef8f2048a9199627d22) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END


ROM_START( hookjs01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-g_ps02.3h", 0x000001, 0x040000, CRC(5b836d2d) SHA1(5f0e34ea481a773f187565d6628c33447332dfdd) )
	ROM_LOAD16_BYTE( "h-l0-g_ps02.5h", 0x000000, 0x040000, CRC(b3594f92) SHA1(b3becbbcf3f2774175ab8f4afacb71f533a2ff8d) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0-a.3l", 0x00001, 0x10000, CRC(bd3d1f61) SHA1(0c884a0b5519f9c0823128872baf7b0c4078e5c4) )
	ROM_LOAD16_BYTE( "h-sl0-a.3n", 0x00000, 0x10000, CRC(76371def) SHA1(b7a86fd4eecdd8a538c32e08cd920c27bd50924b) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookxr )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "hookxr.3h", 0x000001, 0x040000, CRC(a603d006) SHA1(d0d905e9ac98f75010d63911a6038ab3d9d27dde) )
	ROM_LOAD16_BYTE( "hookxr.5h", 0x000000, 0x040000, CRC(8a1e8688) SHA1(39155c04a88a3d939abaf16037195d770d51ff26) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x100000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0-a.3l", 0x00001, 0x10000, CRC(bd3d1f61) SHA1(0c884a0b5519f9c0823128872baf7b0c4078e5c4) )
	ROM_LOAD16_BYTE( "h-sl0-a.3n", 0x00000, 0x10000, CRC(76371def) SHA1(b7a86fd4eecdd8a538c32e08cd920c27bd50924b) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END


 /**********************
 Ninja Baseball Bat Man
*************************/

ROM_START( nbbatmans01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "6_h0_po01.34",   0x000001, 0x040000, CRC(81e706e6) SHA1(95e3b0e490d8a0d8cb8f01c227e6a81bf764fcc5) )
	ROM_LOAD16_BYTE( "3_l0_po01.31",   0x000000, 0x040000, CRC(353c90e9) SHA1(6f53e93f83b08bbb9acd0f593265880a01f96df4) )
	ROM_LOAD16_BYTE( "a1-h1-.33", 0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32", 0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 ) 
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmans02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "6_h0_po02.34",   0x000001, 0x040000, CRC(7c17d59a) SHA1(1493e9f5ee06dbefe49e5ef74cff7cb7d3dc6f19) )
	ROM_LOAD16_BYTE( "3_l0_po02.31",   0x000000, 0x040000, CRC(e54a6e81) SHA1(7059eba1e03a6d1b96c8a5eee606ec503569c695) )
	ROM_LOAD16_BYTE( "a1-h1-.33", 0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32", 0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 ) 
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps01.34", 0x000001, 0x040000, CRC(5f0a22de) SHA1(84a6c3abd72f000a3ce031376bcc5008a07fcd9d) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps01.31", 0x000000, 0x040000, CRC(ff1773f3) SHA1(10a3b81b9dc0104e983a820375e72ee028515c2e) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps02.34", 0x000001, 0x040000, CRC(24a9b794) SHA1(0e36126d43e30e82e0f3f6f85aa17fbf6f9fc1ed) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps02.31", 0x000000, 0x040000, CRC(846d7716) SHA1(edc8d09681c11f2d9dbdc35e64edb910ddc3ee4e) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Guardians
GAME( 2016, hooks01,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (1V4 2016-06-25)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hooks02,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (Zinc Children's Edition Update 2018-05-15)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hooks03,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (Zinc Children's Edition Update 2018-05-02)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, hooks04,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (X2 Edition)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, hooks05,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Can Be Substituted For Character)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, hookus01,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (plus)(US)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, hookus02,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Can Be Substituted For Character)(US)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2016, hookus03,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Iron hook unparalleled 2016-07-31)(US)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, hookjs01,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Can Be Substituted For Character)(Japan)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hookxr,      hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "Unknown",         "Hook (Zinc Children's Edition Update 2018-09-14)(World)",0 )
// Ninja Baseball Bat Man
GAME( 200?, nbbatmans01, nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "Unknown",         "Ninja Baseball Bat Man (X2 Edition)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL )
GAME( 2017, nbbatmans02, nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "Unknown",         "Ninja Baseball Bat Man (1V4 2017-03-15)(World)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL )
GAME( 200?, nbbatmanus01,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "Unknown",         "Ninja Baseball Bat Man (Unknown Hack 2013-06-04)(US)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 200?, nbbatmanus02,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "Unknown",         "Ninja Baseball Bat Man (New Starter Edition Update 2016-10-16)(US)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)

